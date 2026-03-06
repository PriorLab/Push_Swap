/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:48:51 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 10:44:07 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
//Procura a primeira ocorrência de um caractere numa string
/*#include <stdio.h>
int main (void)
{
	const char *s = "Carry on wayward son";
	int c = 'a';
	printf("%c\n",*ft_strchr(s, c));
}*/
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s1 = "Carry on wayward son";
    const char *s2 = "";
    char *ptr;

    // 1. Caractere que existe
    ptr = ft_strchr(s1, 'C');
    if (ptr)
        printf("Encontrado 'C': %s\n", ptr);
    else
        printf("Erro: 'C' não encontrado\n");

    // 2. Caractere repetido → deve retornar a primeira ocorrência
    ptr = ft_strchr(s1, 'r');
    if (ptr)
        printf("Primeiro 'r': %s\n", ptr);
    else
        printf("Erro: 'r' não encontrado\n");

    // 3. Caractere que não existe
    ptr = ft_strchr(s1, 'z');
    if (ptr)
        printf("Encontrado 'z': %s\n", ptr);
    else
        printf("'z' não encontrado (NULL esperado)\n");

    // 4. Procurar terminador '\0'
    ptr = ft_strchr(s1, '\0');
    if (ptr)
        printf("Terminador encontrado no fim: \"%s\"\n", ptr);
    else
        printf("Erro: não encontrou terminador\n");

    // 5. String vazia + procurar qualquer char
    ptr = ft_strchr(s2, 'a');
    if (ptr)
        printf("Erro: encontrou 'a' numa string vazia\n");
    else
        printf("String vazia, 'a' não encontrado (NULL esperado)\n");

    // 6. String vazia + procurar '\0'
    ptr = ft_strchr(s2, '\0');
    if (ptr)
        printf("String vazia, terminador encontrado (certo)\n");
    else
        printf("Erro: terminador não encontrado numa string vazia\n");

    return 0;
}
*/
