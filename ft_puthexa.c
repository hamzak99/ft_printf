/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:49:21 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/23 14:50:50 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tohexalower(unsigned int n)
{
	char	*s;
	int		cnt;

	cnt = 0;
	s = "0123456789abcdef";
	if (n >= 16)
		cnt += ft_tohexalower(n / 16);
	n %= 16;
	cnt += ft_putchr(s[n]);
	return (cnt);
}

int	ft_tohexaupper(unsigned int n)
{
	char	*s;
	int		cnt;

	cnt = 0;
	s = "0123456789ABCDEF";
	if (n >= 16)
		cnt += ft_tohexaupper(n / 16);
	n %= 16;
	cnt += ft_putchr(s[n]);
	return (cnt);
}

static int	getpointer(unsigned long n)
{
	char	*s;
	int		cnt;

	cnt = 0;
	s = "0123456789abcdef";
	if (n >= 16)
		cnt += getpointer(n / 16);
	n %= 16;
	cnt += ft_putchr(s[n]);
	return (cnt);
}

int	ft_putpointer(unsigned long n)
{
	int	cnt;

	cnt = 0;
	cnt += ft_putstr("0x");
	cnt += getpointer(n);
	return (cnt);
}
