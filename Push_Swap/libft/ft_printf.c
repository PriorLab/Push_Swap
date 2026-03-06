/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:40:38 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 15:37:31 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(const char *input, va_list	*args)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += print_char(va_arg(*args, int));
	else if (*input == 's')
		i += print_string(va_arg(*args, char *));
	else if (*input == 'p')
		i += print_pointer(va_arg(*args, void *));
	else if (*input == 'd' || *input == 'i')
		i += print_num(va_arg(*args, int));
	else if (*input == 'u')
		i += print_unsig_num((unsigned long)va_arg(*args, unsigned int));
	else if (*input == 'x')
		i += print_hex((unsigned long)va_arg(*args, unsigned int), 0);
	else if (*input == 'X')
		i += print_hex((unsigned long)va_arg(*args, unsigned int), 1);
	else if (*input == '%')
		i += print_char('%');
	else
		i += print_char (*input);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list		args;
	int			i;

	if (!input)
		return (-1);
	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%' && *(input + 1))
		{
			input++;
			i += check_type(input, &args);
		}
		else
			i += print_char(*input);
		if (i == -1)
			return (va_end(args), -1);
		input++;
	}
	va_end (args);
	return (i);
}
