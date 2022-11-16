/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:59:03 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/16 15:24:13 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    int i = 0, len = 0;
    va_list arg;
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
            else if (format[i] == 'd')
                ft_putnbr(va_arg(arg, int), &len);
            else if (format[i] == 'x' || format[i] == 'X')
                ft_puthexa(va_arg(arg, unsigned int), &len, format[i]);
            else if (format[i] == 'i')
                ft_putnbr(va_arg(arg, int), &len);
            else if (format[i] == 'u')
                ft_putnbr(va_arg(arg, int), &len);
            else if (format[i] == 'p')
                ft_putpointer(va_arg(arg,unsigned long ), &len);
            else if (format[i] == '%')
                ft_putchar('%', &len);
        }
        else
            ft_putchar(format[i], &len);
        i++;
    }
    va_end(arg);
    return (len);
}
// int main()
//  {
// // // //     unsigned int p;
// // // //     p=2222;
// // // //     int i=0,len=0;
//      int lenght =0;
// // // //     len =ft_printf("%p\n",p);
// // // //     // lenght =printf("%x\nbn\n",p);
// // // //    lenght =ft_printf("%p\n",p);
// // // //     printf("\n%d\n",lenght);
// // // //     printf("\n%d\n",len);
//       lenght= printf("this is a %s","test");
//       printf("%d",lenght);
// //}
int main ()
{
    char *test;
    test = malloc(1);
    unsigned long i= test;
    int len ;
   len =  ft_printf("%p     %d     %x\n", test, i, i);\
   printf ("%p     %d     %x\n", test, i, i);
    // printf("%d\n %p",len, test);
}
