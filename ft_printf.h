/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:59:43 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/14 18:29:35 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include<unistd.h>
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

void 	ft_putchar (char c);
size_t	ft_strlen(const char *s);
void    ft_putstr (char * s);
void	ft_putnbr(int n);
void	ft_puthexa(unsigned int n, char *base);
#endif