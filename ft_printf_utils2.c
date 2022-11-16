/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:42:17 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/16 23:04:31 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
		*len += write (1, &c, 1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s, int *len)
{
	if (s == NULL)
		*len += write (1, "(null)", 6);
	if (s)
		*len += write(1, s, ft_strlen(s));
}

void	ft_putnbr(int n, int *len)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-', len);
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10, len);
	ft_putchar((num % 10) + '0', len);
}
