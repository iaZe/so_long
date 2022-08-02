/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:41:52 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/16 01:55:59 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int nbr)
{
	int	n;

	n = 0;
	if (nbr <= 0)
		n++;
	while (nbr)
	{
		nbr /= 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		a;

	a = ft_getlen(n);
	str = ft_calloc(a + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		*str = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(str, "-2147483648", a + 1);
			return (str);
		}
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(str + --a) = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
