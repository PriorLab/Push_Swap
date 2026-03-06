/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:07:42 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/31 13:11:22 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *p)
{
	unsigned long	addr;
	int				count;
	int				tmp;

	if (!p)
		return (print_string("(nil)"));
	addr = (unsigned long)p;
	count = 0;
	tmp = print_char('0');
	if (tmp == -1)
		return (-1);
	count += tmp;
	tmp = print_char('x');
	if (tmp == -1)
		return (-1);
	count += tmp;
	tmp = print_hex(addr, 0);
	if (tmp == -1)
		return (-1);
	return (count + tmp);
}
