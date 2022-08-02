/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:48:12 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/28 01:50:10 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strarray(const char *s, char limiter)
{
	unsigned int	n;

	n = 0;
	while (*s)
	{
		if (*s == limiter)
			s++;
		else
		{
			while (*s != limiter && *s)
				s++;
			n++;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	a;
	unsigned int	b;

	if (!s)
		return (NULL);
	array = (char **) ft_calloc(ft_strarray(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	b = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			a = 0;
			while (*s != c && *s && ++a)
				s++;
			array[++b -1] = (char *) ft_calloc(a + 1, sizeof(char));
			ft_strlcpy(array[b -1], s - a, a + 1);
		}
	}
	return (array);
}
