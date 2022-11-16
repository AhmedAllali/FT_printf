/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:59:03 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/17 00:15:50 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_clm(const char *format, int i, va_list arg, int *len)
{
	if (format [i] == 'X')
		ft_puthexa(va_arg(arg, unsigned int), len, UPBASE);
	else if (format[i] == 'i')
		ft_putnbr(va_arg(arg, int), len);
	else if (format[i] == 'u')
		ft_putunbr(va_arg(arg, unsigned int), len);
	else if (format[i] == 'p')
		ft_putpointer(va_arg(arg, unsigned long), len);
	else if (format[i] == '%')
		ft_putchar('%', len);
	else if (format[i] == 'd')
		ft_putnbr(va_arg(arg, int), len);
	else if (format[i] == 'x' )
		ft_puthexa(va_arg(arg, unsigned int), len, LWBASE);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	len = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' )
		{
			i++;
			if (format[i] == 'c')
				ft_putchar(va_arg(arg, int), &len);
			else if (format[i] == 's')
				ft_putstr(va_arg(arg, char *), &len);
			else
				ft_clm(format, i, arg, &len);
		}
		else
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(arg);
	return (len);
}
