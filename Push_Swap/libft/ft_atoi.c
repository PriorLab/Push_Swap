/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 08:29:20 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 09:56:01 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str [i] >= 9 && (str[i] <= 13 || str[i] == 32))
		i++;
	if (str [i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}
//Converte uma string numérica para um número inteiro (int)
//res = 1 * 10 + ('2' - '0')
//res = 10     +     2
//res = 12
//
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d\n", ft_atoi(" -1234ab567"));
	printf("%d\n", atoi(" +1234ab567"));
	return (0);
}

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>  // para comparar com atoi original

void test_atoi(const char *str)
{
    int ft_val = ft_atoi(str);
    int std_val = atoi(str);

    printf("\"%s\"\n", str);
    printf("  ft_atoi : %d\n", ft_val);
    printf("  atoi    : %d\n", std_val);
    printf("  -> %s\n\n", (ft_val == std_val)
? "✅ OK" : "❌ Diferença detectada");
}

int main(void)
{
    printf("=== TESTES ft_atoi ===\n\n");

    test_atoi("42");                     // 1
    test_atoi("-42");                    // 2
    test_atoi("+42");                    // 3
    test_atoi("   123");                 // 4
    test_atoi("   -123");                // 5
    test_atoi("123abc");                 // 6
    test_atoi("abc123");                 // 7
    test_atoi("+");                      // 8a
    test_atoi("-");                      // 8b
    test_atoi("");                       // 9
    test_atoi("  +--+-42");              // 10
    test_atoi("999999999999999999");     // 11
    test_atoi("-999999999999999999");    // 12

    return 0;
}
*/
