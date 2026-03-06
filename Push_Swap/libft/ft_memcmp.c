/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:47:32 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 10:50:08 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ss1;
	unsigned const char	*ss2;

	i = 0;
	ss1 = (unsigned const char *) s1;
	ss2 = (unsigned const char *) s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
//Compara dois blocos de memória byte a byte, durante n bytes, e diz qual
//é maior, menor ou igual.
/*#include <stdio.h>

int main(void)
{
    char a[] = "abcd";
    char b[] = "abcz";

    printf("a vs b (n=4): %d\n", ft_memcmp(a, b, 4)); // negativo ('d' - 'z')
    printf("a vs b (n=3): %d\n", ft_memcmp(a, b, 3)); // 0 (só 'abc')
    printf("a vs a (n=4): %d\n", ft_memcmp(a, a, 4)); // 0
    printf("binário: %d\n", ft_memcmp("\xff", "\x01", 1)); 
// positivo (255 - 1)

    return 0;
}
*/
