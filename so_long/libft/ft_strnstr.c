/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 01:13:22 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/27 14:14:58 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	a;

	a = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (str[a] != '\0' && a < n)
	{
		if (n - a < ft_strlen(find))
			return (NULL);
		if (ft_strncmp(&str[a], find, ft_strlen(find)) == 0)
			return ((char *)&str[a]);
		a++;
	}
	return (0);
}
