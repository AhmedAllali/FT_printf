/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:02:28 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/16 15:23:23 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void ft_putchar (char c,int *len)
{
	*len += write (1,&c,1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;
	i = 0;
	if (s[i] =='\0')
		return (0);
	while (s[i])
		i++;
	return (i);
}

void  ft_putstr (char *s,int *len)
{
	if (s==NULL)
		*len +=write (1,"(null)",6);
   	if (s)
        	*len += write(1, s, ft_strlen(s));
}

void	ft_putnbr(int n,int *len)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-',len);
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10,len);
	ft_putchar((num % 10) + '0', len);
}


void	ft_puthexa(unsigned int n,int *len, char b)
{
	unsigned long 	num;
	char *base;
	num=n;
	base = LWBASE;
	if (b == 'X')
		base = UPBASE;
	if (num > 15)
		ft_puthexa(num / 16,len,b );
	ft_putchar(base[num % 16],len);
}
void	ft_putadr( unsigned long n,int *len, char b)
{
	char *base;
	if (n > 15)
		// ft_puthexa(num % 16,len,b);
		ft_puthexa(n / 16,len,b);
	ft_putchar(base[n%16],len);
}

void ft_putpointer(unsigned long p, int *len)
{	
	ft_putstr("0x",len);
	ft_putadr((unsigned long )p, len, 'x');
}
