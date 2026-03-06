/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:51:33 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 10:48:12 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*s1;
	size_t				i;

	s1 = (unsigned const char *) s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((void *) &s1[i]);
		i++;
	}
	return (NULL);
}
//Procura um byte especifico dentro dos primeiros n bytes de um bloco de mem
/*
#include <stdio.h>

int main(void)
{
	unsigned const char fr[] = "o corpo e que paga";
	unsigned char c = 'e';
	printf("ponteiro %p", ft_memchr(fr, c, 10));
	return 0;
}*/
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char phrase[] = "o corpo e que paga";
    char *ptr;

    printf("Frase: \"%s\"\n", phrase);

    // 1. Caractere existe
    ptr = ft_memchr(phrase, 'c', strlen(phrase));
    printf("1. Procurar 'c': %s\n", ptr ? ptr : "NULL");

    // 2. Caractere não existe
    ptr = ft_memchr(phrase, 'z', strlen(phrase));
    printf("2. Procurar 'z': %s\n", ptr ? ptr : "NULL");

    // 3. n = 0
    ptr = ft_memchr(phrase, 'o', 0);
    printf("3. Procurar 'o' com n=0: %s\n", ptr ? ptr : "NULL");

    // 4. Caractere no último byte válido
    ptr = ft_memchr(phrase, 'a', strlen(phrase) + 1);
    printf("4. Procurar 'a' (último caractere): %s\n", ptr ? ptr : "NULL");

    // 5. Caractere repetido (primeira ocorrência)
    ptr = ft_memchr(phrase, 'o', strlen(phrase));
    printf
    ("5. Procurar 'o': %s (deve ser o da posicao 0)\n", ptr ? ptr : "NULL");

    // 6. Procurar '\0'
    ptr = ft_memchr(phrase, '\0', sizeof(phrase));
    if (ptr)
        printf("6. Procurar '\\0': encontrado no offset %ld\n", ptr - phrase);
    else
        printf("6. Procurar '\\0': NULL\n");

    // 7. Caractere existe mas fora do limite n
    ptr = ft_memchr(phrase, 'p', 5); // 'p' só aparece depois da posição 5
    printf("7. Procurar 'p' nos primeiros 5 bytes: %s\n", ptr ? ptr : "NULL");

    // 8. Valores > 127 (negativos em char signed)
    unsigned char bin[3] = { 0xFF, 0x00, 0x7F }; // 255, 0, 127
    ptr = ft_memchr(bin, 0xFF, 3);
    printf("8. Procurar 0xFF: %s (offset %ld)\n",
           ptr ? "encontrado" : "NULL",
           ptr ? ptr - (char *)bin : -1);

    return 0;
}
*/
