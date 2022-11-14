/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:49:16 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/23 14:52:21 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchr(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nbr);
int	ft_putnbrunsig(unsigned int nbr);
int	ft_tohexalower(unsigned int n);
int	ft_tohexaupper(unsigned int n);
int	ft_putpointer(unsigned long n);

#endif