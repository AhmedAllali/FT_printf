/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:02:28 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/14 18:32:22 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#define UPBASE "0123456789ABCDEF"
#define LWBASE "0123456789abcdef"

void ft_putchar (char c)
{
    write (1,&c,1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int  ft_putstr (char * s)
{
    if (s)
        	return (write(1, s, ft_strlen(s)));
    return (0);
        
}

void	ft_putnbr(int n)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
}

void	ft_puthexa(unsigned int n, char *base)
{
	long long	num;

	num = n;
	// if (num < 0)
	// {
	// 	ft_putchar('-');
	// 	num *= -1;
	// }
    
	if (num > 15)
		ft_puthexa(num / 16, base);
	ft_putchar(base[num % 16]);
}

int main(){
    printf("%X\n",-4851448);
    ft_puthexa(-4851448,UPBASE);
}