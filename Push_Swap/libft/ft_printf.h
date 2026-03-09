/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:46:35 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/31 12:57:26 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*___________________________BIBLIOTECAS______________________________________*/

# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>

/*___________________________Prototipos_______________________________________*/

int		ft_printf(const char *input, ...);
int		print_char(char c);
int		print_hex(unsigned long n, int uppercase);
int		print_string(char *str);
int		print_unsig_num(unsigned long i);
int		print_num(long i);
int		print_pointer(void *p);

#endif