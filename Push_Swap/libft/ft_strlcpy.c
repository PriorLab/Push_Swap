/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:38:33 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 20:25:49 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen (src);
	if (src_len + 1 < dstsize)
		ft_memcpy (dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy (dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}
//copia uma string de src para dst de forma a que nunca ultrapasse dstsize
//e que termina sempre em '\0' retorna o tamanho de src
//dstsize e o tamanho do buffer dst incluindo o '\0'
//_________________________pormaiores_____________________________________
//CONDICOES
//1. se o tamano do destino for maior do que o que queremos copiar tudo ok
//2. se nao, se o tamanho de dstsize for diferente de 0, fazemos a funcao
//mas ate ao limite maximo deixando um expaco para o 0 copiamos o limite
//
//
//atencao dstzise -1 indica que o ultimo byte nao conta comecam em 1
//atencao dst[dstsize-1] indica a ultima posicao da string comecam em 0
//retorna o nr total de caracteres que tentou copiar
/*#include<stdio.h>
int main(void)
{
	char dst[30];
	const char *src = "Hello world!!!";
		size_t i = 5;
printf("%li",ft_strlcpy(dst,src,i));
return 0;
}*/
