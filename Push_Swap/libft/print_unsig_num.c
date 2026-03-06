/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsig_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:56:27 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/31 13:11:41 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsig_num(unsigned long i)
{
	int	w;
	int	rec;

	if (i >= 10)
	{
		rec = print_unsig_num(i / 10);
		if (rec == -1)
			return (-1);
		w = print_char('0' + (i % 10));
		if (w == -1)
			return (-1);
		return (rec + 1);
	}
	if (print_char('0' + i) == -1)
		return (-1);
	return (1);
}
