/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:25:11 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/20 00:57:00 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	b;
	int	value;

	a = 0;
	b = 1;
	value = 0;
	while ((nptr[a] >= '\t' && nptr[a] <= '\r') || nptr[a] == ' ')
		a++;
	if (nptr[a] == '+' || nptr[a] == '-')
	{
		if (nptr[a] == '-')
			b *= -1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		value = (value * 10) + nptr[a] - '0';
		a++;
	}
	return (value * b);
}
