/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:02:28 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/16 23:01:42 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *len)
{
	if (n > 9)
		ft_putnbr(n / 10, len);
	ft_putchar((n % 10) + '0', len);
}

void	ft_puthexa(unsigned long n, int *len, char *base)
{
	unsigned long	num;

	num = n;
	if (num > 15)
		ft_puthexa(num / 16, len, base);
	ft_putchar(base[num % 16], len);
}

void	ft_putpointer(unsigned long p, int *len)
{	
	ft_putchar('0', len);
	ft_putchar('x', len);
	ft_puthexa(p, len, LWBASE);
}
