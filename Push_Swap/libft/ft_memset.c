/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:11:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 19:21:12 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *) s;
	while (len > 0)
	{
		*tmp_s++ = (unsigned char) c;
		len --;
	}
	return (s);
}

/*int	main(void)
{
	char str[20] = "ola mundo";
	
	printf("%s\n",str); 

	ft_memset(str, 'a', 5);

	printf("%s\n",str);
	return (0);
}*/
//preenche a area de memoria, com um mesmo byte repetido(c) pelo numero
//de bytes especificados
//_______________________especificidades__________________________________
//temos de criar uma variavel temporaria pois o s recebe qualquer
//parametro, void* nao pode ser indexado nem manipulado
//ao indicar o tmp_s, temos de indicar o chamado type cast
//type cast(forcar um valor a ser tratao como outro tipo)
