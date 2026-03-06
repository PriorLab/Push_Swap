/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:41:51 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:57:57 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n);

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	int		len;

	i = n;
	len = count_digits(i);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	if (i == 0)
		str[0] = '0';
	while (i > 0)
	{
		str[--len] = (i % 10) + '0';
		i /= 10;
	}
	return (str);
}

static int	count_digits(long n)
{
	long	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
/*
#include <stdio.h>
#include <limits.h> // Para INT_MIN e INT_MAX
#include <stdlib.h> // Para free()
#include "libft.h"  // A tua ft_itoa está aqui

void test_itoa(int n)
{
    char *str = ft_itoa(n);
    if (!str)
    {
        printf("ft_itoa(%d) -> NULL (ERRO)\n", n);
        return;
    }
    printf("ft_itoa(%d) = \"%s\"\n", n, str);
    free(str);
}

int main(void)
{
    printf("===== TESTES PARA ft_itoa =====\n\n");

    // 🟢 Casos básicos
    test_itoa(0);
    test_itoa(5);
    test_itoa(42);
    test_itoa(-7);
    test_itoa(-123);

    // 🟡 Casos com múltiplos dígitos
    test_itoa(12345);
    test_itoa(-98765);
    test_itoa(100000);
    test_itoa(-100000);

    // 🔴 Casos limites do int
    test_itoa(INT_MAX); //  2147483647
    test_itoa(INT_MIN); // -2147483648

    // 🟣 Caso específico com muitos zeros dentro
    test_itoa(1002);
    test_itoa(-3000);

    // 🔵 Teste de independência da memória
    char *str = ft_itoa(1234);
    printf("\nTeste de independência:\n");
    printf("Original: %s\n", str);
    str[0] = 'X'; // Alterar a string retornada
    printf("Alterado: %s  (isto NÃO deve afetar uma nova chamada)\n", str);
    free(str);

    char *str2 = ft_itoa(1234);
    printf("Novo ft_itoa(1234): %s (ainda correto)\n", str2);
    free(str2);

    printf("\n=== Fim dos testes. Verifica leaks com: valgrind ./a.out ===\n");
    return (0);
}
*/
