/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:24:35 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 20:31:54 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
	return (0);
}
//Converte um caractere maiúsculo para minúsculo.
/*#include<stdio.h>
int	main(void)
{
	printf("%c", ft_lower('A'));
}*/
