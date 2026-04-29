/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:20:45 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/29 17:12:38 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char	*, ...);
int	print_char(char c);
int	print_string(char *str);
int	print_number(int n);
int	print_hex(unsigned int n, int uppercase);
int	print_pointer(void *p);

#endif