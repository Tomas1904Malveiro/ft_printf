/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:20:40 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/28 13:41:34 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    int i;
    int count;
    va_list args;
    va_start(args, str);
    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] == '%')
        {
         str[i + 1];
         va_arg(args, char *);
        }
    }
    va_end(args);
}