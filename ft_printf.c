/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:49:11 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/23 20:12:46 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	decimal(int n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
		cnt += ft_putnbr(n) + 1;
	else
		cnt += ft_putnbr(n);
	return (cnt);
}

int	display(va_list ptr, char c)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt += ft_putchr(va_arg(ptr, int));
	else if (c == 's')
		cnt += ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
		cnt += ft_putpointer(va_arg(ptr, unsigned long));
	else if (c == 'd' || c == 'i')
		cnt += ft_putnbr(va_arg(ptr, int));
	else if (c == 'u')
		cnt += ft_putnbrunsig(va_arg(ptr, unsigned int));
	else if (c == 'x')
		cnt += ft_tohexalower(va_arg(ptr, unsigned int));
	else if (c == 'X')
		cnt += ft_tohexaupper(va_arg(ptr, unsigned int));
	else if (c == '%')
		cnt += ft_putchr('%');
	return (cnt);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			cnt += display(ptr, s[i]);
		}
		else
			cnt += ft_putchr(s[i]);
		i++;
	}
	va_end(ptr);
	return (cnt);
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n ;
	int *p = &n;
	printf("%p\n",p);
	ft_printf("%p",p);
	return 0;
}