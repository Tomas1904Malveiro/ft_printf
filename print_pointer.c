/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:07:42 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/29 14:21:56 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int	print_hex_pointer(uintptr_t nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += print_hex_pointer(nbr / 16);
	}
	write(1, &"0123456789abcdef"[nbr % 16], 1);
	len++;
	return (len);
}
int	print_pointer(void *p)
{
	int			len;
	uintptr_t	nbr;

	len = 0;
	nbr = (uintptr_t)p;
	len += write(1, "0x", 2);
	len += print_hex_pointer(nbr);
	return (len);
}
