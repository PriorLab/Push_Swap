/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:11:02 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/31 12:57:02 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(long i)
{
	int	rec;

	if (i < 0)
	{
		if (print_char('-') == -1)
			return (-1);
		return (print_num(-i) + 1);
	}
	if (i >= 10)
	{
		rec = print_num(i / 10);
		if (rec == -1)
			return (-1);
		if (print_char('0' + (i % 10)) == -1)
			return (-1);
		return (rec + 1);
	}
	if (print_char('0' + i) == -1)
		return (-1);
	return (1);
}
