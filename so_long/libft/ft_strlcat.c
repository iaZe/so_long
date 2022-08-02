/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:49:15 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/30 21:08:50 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dst[b] && b < n)
		b++;
	a = b;
	while (src[b - a] && (b + 1) < n)
	{
		dst[b] = src[b - a];
		b++;
	}
	if (a < n)
		dst[b] = '\0';
	return (a + ft_strlen(src));
}
