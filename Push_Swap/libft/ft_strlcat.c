/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:03:27 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 20:31:02 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen (dst);
	src_len = ft_strlen (src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	if (dstsize > dst_len + src_len)
		ft_memcpy (dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy (dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
//Concatena src no fim de dst sem ultrapassar dstsize e retorna o tamanho
//total que a string teria.
/*#include<stdio.h>
int main(void)
	{
	char *dst = "hello ";
	const char*src = "world!";
	printf("%li", ft_strlcat(dst,src,3));
}
*/
