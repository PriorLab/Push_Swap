/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:20:03 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:38:50 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 | !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc(end - start + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + start, end - start);
	trim[end - start] = '\0';
	return (trim);
}
//Remove do início e do fim da string todos os caracteres 
//que estão dentro do conjunto set.
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// protótipo da tua função
char *ft_strtrim(const char *s1, const char *set);

// versão de referência para comparação
static char *strtrim_ref(const char *s1, const char *set)
{
    if (!s1 || !set)
        return NULL;

    const char *start = s1;
    const char *end = s1 + strlen(s1);

    while (*start && strchr(set, *start))
        start++;
    while (end > start && strchr(set, *(end - 1)))
        end--;

    char *trim = malloc(end - start + 1);
    if (!trim)
        return NULL;
    memcpy(trim, start, end - start);
    trim[end - start] = '\0';
    return trim;
}

// função de comparação e impressão colorida
static void check_case(const char *label, const char *s, const char *set)
{
    char *res1 = ft_strtrim(s, set);
    char *res2 = strtrim_ref(s, set);

    int equal = 0;
    if (res1 == NULL && res2 == NULL)
        equal = 1;
    else if (res1 && res2 && strcmp(res1, res2) == 0)
        equal = 1;

    if (equal)
        printf("\033[1;32m✅ %-25s\033[0m ", label);
    else
        printf("\033[1;31m❌ %-25s\033[0m ", label);

    printf("| s1=\"%s\" | set=\"%s\" → got=\"%s\" | expected=\"%s\"\n",
           s ? s : "(null)", set ? set : "(null)",
           res1 ? res1 : "(null)", res2 ? res2 : "(null)");

    free(res1);
    free(res2);
}

// MAIN: executa todos os testes
int main(void)
{
    printf("=== 🧪 Testes avançados ft_strtrim ===\n\n");

    check_case("Espaços simples", "   42 Lisboa   ", " ");
    check_case("Tabs e newlines", "\t\n 42 Lisboa \n\t", " \n\t");
    check_case("Só no início", "$$$Dinheiro", "$");
    check_case("Só no fim", "Amor!!!", "!");
    check_case("Ambos os lados", "___Hello World___", "_");
    check_case("Nada a remover", "42", "_");
    check_case("Set com vários chars", "xXx42LisboaxXx", "xX");
    check_case("String vazia", "", " ");
    check_case("Set vazio", " 42 ", "");
    check_case("Tudo removido", "aaaa", "a");
    check_case("Só espaços", "     ", " ");
    check_case("Caractere especial", "###Olá###", "#");
    check_case("Números e letras", "123abc123", "123");
    check_case("Unicode", "çã42Lisboaãç", "çã");
    check_case("s1 NULL", NULL, " ");
    check_case("set NULL", "42Lisboa", NULL);
    check_case("Múltiplos tipos", "\t__ 42 __\t", " \t_");
    check_case("Caracteres invisíveis", "\n\t 42\n\t ", " \n\t");

    printf("\n=== 🧩 Testes concluídos ===\n");
    printf("💡 Corre com 'valgrind --leak-check=full ./a.out' 
		    para garantir que não há leaks.\n");

    return 0;
}
*/
