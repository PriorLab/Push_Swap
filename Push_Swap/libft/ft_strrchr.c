/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:23:37 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 10:44:22 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
//Procura a última ocorrência de um caractere numa string.
//ATENCAO i nao e um iterador normal, nao comeca em 0 temos de o tratar de 
//forma diferente
/*#include <stdio.h>
int main (void)
{
	const char *s = "Carry on wayward son";
	int c = 'a';
	printf("%c, na posica %zu\n",*ft_strrchr(s, c),ft_strrchr(s, c) - s);
}
*/
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s1 = "Carry on wayward son";
    const char *s2 = "";
    char *ptr;

    // 1. Caractere que existe (último 'a')
    ptr = ft_strrchr(s1, 'a');
    if (ptr)
        printf("Ultimo 'a' encontrado em \"%s\" (posicao %ld)\n", ptr, ptr - s1);
    else
        printf("Erro: 'a' nao encontrado\n");

    // 2. Caractere na posicao 0 ('C')
    ptr = ft_strrchr(s1, 'C');
    if (ptr)
        printf("Ultimo 'C' encontrado em \"%s\" (posicao %ld)\n", ptr, ptr - s1);
    else
        printf("Erro: 'C' nao encontrado\n");

    // 3. Caractere que nao existe ('z')
    ptr = ft_strrchr(s1, 'z');
    if (ptr)
        printf("Ultimo 'z' encontrado em \"%s\" (posicao %ld)\n", ptr, ptr - s1);
    else
        printf("'z' nao encontrado (NULL esperado)\n");

    // 4. Procurar '\0'
    ptr = ft_strrchr(s1, '\0');
    if (ptr)
        printf("Terminador encontrado no fim (posicao %ld)\n", ptr - s1);
    else
        printf("Erro: terminador nao encontrado\n");

    // 5. String vazia + procurar qualquer char
    ptr = ft_strrchr(s2, 'a');
    if (ptr)
        printf("Erro: encontrou 'a' numa string vazia\n");
    else
        printf("String vazia, 'a' nao encontrado (NULL esperado)\n");

    // 6. String vazia + procurar '\0'
    ptr = ft_strrchr(s2, '\0');
    if (ptr)
        printf("String vazia, terminador encontrado (posicao %ld)\n", ptr - s2);
    else
        printf("Erro: terminador nao encontrado numa string vazia\n");

    return 0;
}
*/
