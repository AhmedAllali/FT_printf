/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:59:43 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/16 23:00:06 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define UPBASE "0123456789ABCDEF"
# define LWBASE "0123456789abcdef"
# include<unistd.h>
# include<stdio.h>
# include<stdarg.h>
# include<stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putunbr(unsigned int n, int *len);
void	ft_puthexa(unsigned long n, int *len, char *base);
void	ft_putpointer(unsigned long p, int *len );
#endif