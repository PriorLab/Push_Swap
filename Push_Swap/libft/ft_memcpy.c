/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 20:26:34 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*tmp_dest;
	size_t				i;
	const unsigned char	*tmp_src;

	if (!dest && !src)
		return (NULL);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	i = 0;
	while (i < len)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
//unsigned char e usado para nao so ter mais memoria como para 
//evitar numero negativos
//e preciso criar duas variaveis temporarias porque o prototipo 
//indica voids nao e possivel indexar voids
//os voids sao importantes para que nos possamos definir ao utilizar 
//esta funcao os diferentes tipos int/char/long
/*int   main(void)
{
char    str[20] = "ola mundo";
char	dest[] = "hell world";
printf("%s\n",dest); 
ft_memcpy(dest,str, 3);
printf("%s\n",dest);
return (0);
}*/
//copia n bytes de memoria da src para dest mas nao segura
//para areas sobrepostas
