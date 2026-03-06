/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:20:14 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:09:25 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	dest = (char *) malloc(ft_strlen(s1)+1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//Cria uma nova cópia de uma string usando malloc e devolve
//o ponteiro para essa nova string.
/*#include<stdio.h>

int main(void)
{
	printf("%s\n",ft_strdup("OMA-Restaurante"));
	return 0;
}*/
