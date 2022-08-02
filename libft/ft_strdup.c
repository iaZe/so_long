/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:48:01 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/16 01:11:31 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;

	a = malloc(ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	ft_memcpy(a, s, ft_strlen(s) + 1);
	return (a);
}
