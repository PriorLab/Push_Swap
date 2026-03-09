/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:25:08 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:52:48 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c);
static char	*malloc_word(const char *s, int start, int end);
static void	free_mem(char **arr, int size);
static char	**words(const char *s, char c, char **res);

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (words(s, c, res));
}

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*malloc_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_mem(char **arr, int size)
{
	while (size--)
		free(arr[size]);
	free(arr);
}

static char	**words(const char *s, char c, char **res)
{
	int	i;
	int	w;
	int	j;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			res[w] = malloc_word(s, j, i + 1);
			if (!res[w])
			{
				free_mem(res, w);
				return (NULL);
			}
			w++;
		}
		i++;
	}
	res[w] = NULL;
	return (res);
}
//wordcount -> se nao for igual ao separador, 
//&& o separador estiver atras conta, tambem tem de contar a primeira pal
//j e o inicio da palavra, i e o fim de cada palavra w contador de pal.
/*#include<stdio.h>

int main (void)
{
	char **t = ft_split("A vida e boa quando tudo corre bem", ' ' );
	int i = 0;
	if(!t)
		return(1);
	while (t[i])
	{
	printf("%s\n", t[i]);
	free(t[i]);
	i++;
	}
	free (t);
	return 0;

}*/
/*#include <stdio.h>

void print_split(char **res)
{
    if (!res)
    {
        printf("(null)\n");
        return;
    }
    for (int i = 0; res[i]; i++)
        printf("[%s]\n", res[i]);
}

void free_split(char **res)
{
    int i = 0;
    if (!res) return;
    while (res[i])
        free(res[i++]);
    free(res);
}

int main(void)
{
    char **res;

    printf("===== TESTES PARA ft_split =====\n\n");

    // 1. Caso normal
    printf("1. \"A vida e bela\" com ' ':\n");
    res = ft_split("A vida e bela", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 2. Múltiplos separadores
    printf("2. \"A   vida   e   bela\" com ' ':\n");
    res = ft_split("A   vida   e   bela", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 3. String começa com separador
    printf("3. \" 42 Lisboa\" com ' ':\n");
    res = ft_split(" 42 Lisboa", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 4. String termina com separador
    printf("4. \"Bom dia \" com ' ':\n");
    res = ft_split("Bom dia ", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 5. Apenas separadores
    printf("5. \"     \" com ' ':\n");
    res = ft_split("     ", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 6. String vazia
    printf("6. \"\" com ' ':\n");
    res = ft_split("", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 7. Um único carácter
    printf("7. \"X\" com ' ':\n");
    res = ft_split("X", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 8. Delimitador não existente
    printf("8. \"Hello\" com ',':\n");
    res = ft_split("Hello", ',');
    print_split(res);
    free_split(res);
    printf("\n");

    // 9. s == NULL
    printf("9. NULL com ' ':\n");
    res = ft_split(NULL, ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    // 10. Separador como carácter especial
    printf("10. \"abc--def--ghi\" com '-':\n");
    res = ft_split("abc--def--ghi", '-');
    print_split(res);
    free_split(res);
    printf("\n");

    // 11. Frase longa (stress test)
    printf("11. \"palavra1 palavra2 palavra3 ...\" com espaço:\n");
    res = ft_split("Um testezinho para ver se tudo esta a funcionar bem", ' ');
    print_split(res);
    free_split(res);
    printf("\n");

    printf("=== Fim dos testes. Usa 'valgrind --leak-check=full ./a.out' 
		    para detetar leaks ===\n");
    return 0;
}*/
