/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:59:43 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/16 15:23:40 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#define UPBASE "0123456789ABCDEF"
#define LWBASE "0123456789abcdef"
#include<unistd.h>
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

void	ft_putchar (char c,int *len);
size_t	ft_strlen(const char *s);
void    ft_putstr (char * s,int *len);
void	ft_putnbr(int n,int * len);
void	ft_puthexa(unsigned int n, int *len, char b);
void    ft_putpointer(unsigned long p,int *len );
#endif