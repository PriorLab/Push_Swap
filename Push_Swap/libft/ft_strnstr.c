/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 08:00:52 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 10:56:08 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (i + j < len && haystack[i + j] == needle[j] && needle[j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
//Procura a substring needle dentro dos primeiros len caracteres de haystack
/*#include <stdio.h>

int main (void)
{
	const char big[] = "mellow world";
	const char needle[] = "ow";
	printf("%s\n", ft_strnstr(big, needle, 20));
}*/
/*#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *haystack = "o corpo e que paga";
    const char *needle;
    char *ptr;

    printf("=== TESTES ft_strnstr ===\n\n");

    // 1. Substring normal dentro do limite
    needle = "que";
    ptr = ft_strnstr(haystack, needle, 18);
    printf("1. Procurar \"%s\" em \"%s\" (len=18): %s\n",
           needle, haystack, ptr ? ptr : "NULL");

    // 2. Substring fora do limite
    ptr = ft_strnstr(haystack, needle, 5);
    printf("2. \"%s\" fora do limite (len=5): %s\n", needle, ptr ? ptr : "NULL");

    // 3. Needle no início
    needle = "o";
    ptr = ft_strnstr(haystack, needle, 3);
    printf("3. Needle no início: %s\n", ptr ? ptr : "NULL");

    // 4. Needle não existente
    needle = "xyz";
    ptr = ft_strnstr(haystack, needle, 18);
    printf("4. Needle inexistente: %s\n", ptr ? ptr : "NULL");

    // 5. Needle vazio
    needle = "";
    ptr = ft_strnstr(haystack, needle, 18);
    printf("5. Needle vazio: %s\n", ptr ? ptr : "NULL");

    // 6. Haystack vazio
    haystack = "";
    needle = "abc";
    ptr = ft_strnstr(haystack, needle, 10);
    printf("6. Haystack vazio: %s\n", ptr ? ptr : "NULL");

    // 7. Ambos vazios
    needle = "";
    ptr = ft_strnstr(haystack, needle, 0);
    printf("7. Ambos vazios (len=0): %s\n", ptr ? ptr : "NULL");

    // 8. len = 0
    haystack = "abc";
    needle = "a";
    ptr = ft_strnstr(haystack, needle, 0);
    printf("8. len=0: %s\n", ptr ? ptr : "NULL");

    // 9. Needle maior que haystack
    haystack = "abc";
    needle = "abcdef";
    ptr = ft_strnstr(haystack, needle, 10);
    printf("9. Needle maior que haystack: %s\n", ptr ? ptr : "NULL");

    // 10. len > tamanho do haystack
    haystack = "o corpo e que paga";
    needle = "paga";
    ptr = ft_strnstr(haystack, needle, 100);
    printf("10. len maior que string: %s\n", ptr ? ptr : "NULL");

    return 0;
}
*/
