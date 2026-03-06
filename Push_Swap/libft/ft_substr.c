/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:48:32 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:32:12 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*final;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	final = malloc(len + 1);
	if (!final)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		final[i] = s[i + start];
		i++;
	}
	final[i] = '\0';
	return (final);
}
//Cria uma nova string contendo apenas uma parte (um pedaço) da string
//original, começando em start e com tamanho máximo len.
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declaração da função que queres testar
//char *ft_substr(char const *s, unsigned int start, size_t len);

// Funções auxiliares
static void check(const char *desc, const char *result, const char *expected)
{
    printf("🧪 %-35s → ", desc);
    if (!result && !expected)
        printf("✅ (NULL esperado e recebido)\n");
    else if (!result)
        printf("❌ retornou NULL (esperado \"%s\")\n", expected);
    else if (strcmp(result, expected) != 0)
        printf("❌ \"%s\" ≠ \"%s\"\n", result, expected);
    else
        printf("✅ \"%s\"\n", result);
    free((void *)result);
}

int main(void)
{
    printf("=== 🔍 TESTES RIGOROSOS PARA ft_substr ===\n\n");

    // 1️⃣ Substring normal no meio
    check("1. Substring no meio",
          ft_substr("abcdef", 2, 3),
          "cde");

    // 2️⃣ Substring no início
    check("2. Substring no início",
          ft_substr("abcdef", 0, 2),
          "ab");

    // 3️⃣ Substring até ao fim
    check("3. Até ao fim",
          ft_substr("abcdef", 3, 10),
          "def");

    // 4️⃣ start maior que o tamanho da string → deve retornar string vazia
    check("4. start > strlen(s)",
          ft_substr("abc", 10, 2),
          "");

    // 5️⃣ len = 0 → string vazia
    check("5. len = 0",
          ft_substr("abc", 1, 0),
          "");

    // 6️⃣ string vazia com len > 0
    check("6. string vazia, len > 0",
          ft_substr("", 0, 5),
          "");

    // 7️⃣ start = strlen(s) → deve retornar string vazia
    check("7. start = strlen(s)",
          ft_substr("abc", 3, 5),
          "");

    // 8️⃣ string grande (verificar se ajusta len corretamente)
    {
        char src[] = "abcdefghijklmnopqrstuvwxyz";
        check("8. len > restante",
              ft_substr(src, 20, 20),
              "uvwxyz");
    }

    // 9️⃣ caracteres especiais e espaços
    check("9. espaços e tabulações",
          ft_substr(" 42 Lisboa \t campus ", 3, 8),
          "Lisboa \t");

    // 🔟 start=0 e len = strlen(s)
    check("10. cópia completa",
          ft_substr("ola42", 0, 5),
          "ola42");

    // 11️⃣ input nulo
    printf("🧪 11. Entrada NULL → ");
    char *r = ft_substr(NULL, 0, 5);
    if (r == NULL)
        printf("✅ retornou NULL corretamente\n");
    else {
        printf("❌ devia retornar NULL, retornou \"%s\"\n", r);
        free(r);
    }

    // 12️⃣ Verificar se a substring é independente (não aponta para a original)
    {
        const char *src = "banana";
        char *sub = ft_substr(src, 1, 3);
        printf("🧪 12. Independência da cópia → ");
        if (!sub)
            printf("❌ falha de alocação\n");
        else {
            if (sub == src + 1)
                printf("❌ a substring aponta para a string original!\n");
            else
                printf("✅ substring é uma cópia independente\n");
            free(sub);
        }
    }

    printf("\n=== 🧩 Testes concluídos ===\n");
    printf("💡 Corre com 'valgrind --leak-check=full ./a.out'
		    para confirmar ausência de leaks.\n");
    return 0;
}
*/
