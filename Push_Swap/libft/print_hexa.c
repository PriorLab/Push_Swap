/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:52:25 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/31 12:06:32 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, int uppercase)
{
	char	*base;
	int		rec;
	int		w;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		rec = print_hex(n / 16, uppercase);
		if (rec == -1)
			return (-1);
	}
	w = print_char(base[n % 16]);
	if (w == -1)
		return (-1);
	if (n >= 16)
		return (rec + 1);
	return (1);
}
