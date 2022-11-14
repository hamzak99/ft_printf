/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:49:18 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/23 14:50:12 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchr(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_strlen(char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

int	ft_putstr(char *s)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (cnt += 6);
	}
	while (s[i])
		ft_putchr(s[i++]);
	return (cnt += ft_strlen(s));
}
