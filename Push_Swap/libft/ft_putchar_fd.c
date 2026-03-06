/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:00:16 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/22 14:35:17 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//That’s it — a number used by the OS to access files.
//| FD | Name   | Meaning                   |
//| -- | ------ | ------------------------- |
//| 0  | stdin  | Standard input (keyboard) |
//| 1  | stdout | Standard output (screen)  |
//| 2  | stderr | Standard error            |
