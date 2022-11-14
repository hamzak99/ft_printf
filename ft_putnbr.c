/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:49:24 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/23 16:43:21 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	n;
	int		cnt;

	n = nbr;
	cnt = 0;
	if (n < 0)
	{
		cnt += ft_putchr('-');
		n *= -1;
	}
	if (n >= 10)
	{
		cnt += ft_putnbr(n / 10);
	}
	n %= 10;
	cnt += ft_putchr(n + '0');
	return (cnt);
}

int	ft_putnbrunsig(unsigned int nbr)
{
	int	cnt;

	cnt = 0;
	if (nbr >= 10)
	{
		cnt += ft_putnbrunsig(nbr / 10);
	}
	nbr %= 10;
	cnt += ft_putchr(nbr + '0');
	return (cnt);
}
