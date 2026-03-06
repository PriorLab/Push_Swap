/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:55:58 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 19:26:52 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void 	ft_bzero(void *s, size_t len)
{
	unsigned char *tmp_s;

	tmp_s = (unsigned char *) s;

	while (len > 0)
	{	
		*tmp_s++ = '\0';
		len--;
	}
}*/
void	ft_bzero(void *s, size_t len)
{
	ft_memset (s, 0, len);
}
// tambem funciona

/*int	main(void)
{

char	str[20] = "ola mundo";
	printf("%s\n",str); 
	ft_bzero(str, 1);
	printf("%s\n",str);
	return (0);
}*/
//retorna 0 aos length bytes da string s
// '\0' para strings, 0 para int e NULL para ponteiros
