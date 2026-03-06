/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:37:32 by alemigue          #+#    #+#             */
/*   Updated: 2025/10/31 14:18:10 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join [j + i] = s2 [j];
		j++;
	}
	join [j + i] = '\0';
	return (join);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void print_result(const char *desc, const char *s)
{
	if (s)
		printf("%-35s -> \"%s\"\n", desc, s);
	else
		printf("%-35s -> (null)\n", desc);
}

static void test_independencia(void)
{
	char a[] = "Hello";
	char b[] = "World";
	char *joined = ft_strjoin(a, b);

	printf("\n// Teste de independência\n");
	printf("Antes: a=\"%s\" b=\"%s\" joined=\"%s\"\n", a, b, joined);
	a[0] = 'J';
	b[0] = 'X';
	printf("Depois de alterar originais:\n");
	printf("a=\"%s\" b=\"%s\" joined=\"%s\"  
// esperado: joined inalterado\n", a, b, joined);

	free(joined);
}

static void test_grande(void)
{
	size_t len = 50000;
	char *a = malloc(len + 1);
	char *b = malloc(len + 1);
	if (!a || !b)
	{
		printf("\n[warn] malloc falhou no stress test\n");
		free(a);
		free(b);
		return;
	}
	for (size_t i = 0; i < len; i++)
	{
		a[i] = 'A' + (i % 26);
		b[i] = 'a' + (i % 26);
	}
	a[len] = '\0';
	b[len] = '\0';

	char *joined = ft_strjoin(a, b);
	if (!joined)
		printf("\n[erro] ft_strjoin devolveu NULL no stress test\n");
	else
	{
		printf("\n// Stress test (50k+50k chars)\n");
		printf("Tamanho resultante: %zu  
// esperado: 100000\n", ft_strlen(joined));
		free(joined);
	}
	free(a);
	free(b);
}

int	main(void)
{
	printf("=== Testes exaustivos de ft_strjoin ===\n\n");

	// 1) Casos normais
	print_result("Normal", ft_strjoin("Ola", " Mundo"));
	print_result("Palavras curtas", ft_strjoin("42", "Lisboa"));
	print_result("Espaços", ft_strjoin("  espaco  ", " aqui "));
	print_result("Tabulações", ft_strjoin("Tab", "\tTest"));
	print_result("Números", ft_strjoin("123", "456"));
	print_result("Pontuação", ft_strjoin("Olá,", " tudo bem?"));

	// 2) Strings vazias
	print_result("Primeira vazia", ft_strjoin("", "42"));
	print_result("Segunda vazia", ft_strjoin("42", ""));
	print_result("Ambas vazias", ft_strjoin("", ""));

	// 3) Strings com um só carácter
	print_result("Um carácter cada", ft_strjoin("A", "B"));
	print_result("Primeira 1 char", ft_strjoin("Z", "abcdef"));
	print_result("Segunda 1 char", ft_strjoin("abcdef", "Z"));

	// 4) Valores NULL (devem retornar NULL, não segfault)
	print_result("Primeira NULL", ft_strjoin(NULL, "abc"));
	print_result("Segunda NULL", ft_strjoin("abc", NULL));
	print_result("Ambas NULL", ft_strjoin(NULL, NULL));

	// 5) Unicode e caracteres especiais
	print_result("Unicode", ft_strjoin("Olá 🌍", " 42!"));
	print_result("Especiais", ft_strjoin("çãõ", "ßøπ"));

	// 6) Independência da cópia
	test_independencia();

	// 7) Stress test (grande volume de dados)
	test_grande();

	// 8) Comparação com strcat
	printf("\n// Comparação com strcat\n");
	char buffer[100] = "abc";
	strcat(buffer, "xyz");
	char *joined = ft_strjoin("abc", "xyz");
	printf("strcat     -> \"%s\"\n", buffer);
	printf("ft_strjoin -> \"%s\"\n", joined);
	free(joined);

	printf("\nOK: nenhum crash esperado. Verifica com Valgrind:\n");
	printf("  valgrind --leak-check=full ./a.out\n");
	return 0;
}*/
