/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:48:49 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/13 00:29:03 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		a = n - 1;
		while (a < n)
		{
			((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
			a--;
		}
	}
	else
	{
		while (a < n)
		{
			((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
			a++;
		}
	}
	return (dest);
}
