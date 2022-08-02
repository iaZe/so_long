/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:42:32 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/26 01:26:39 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchar(char s1, char const *set)
{
	size_t	a;

	a = 0;
	while (set[a])
	{
		if (set[a++] == s1)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	a;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkchar(s1[start], set))
		start++;
	while (end > start && ft_checkchar(s1[end - 1], set))
		end--;
	str = ft_calloc((end - start) + 1, sizeof(char));
	if (!str)
		return (NULL);
	a = 0;
	while (start < end)
		str[a++] = s1[start++];
	return (str);
}
