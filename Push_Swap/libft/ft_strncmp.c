/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:55:45 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 10:45:37 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ss1;
	unsigned const char	*ss2;

	i = 0;
	ss1 = (unsigned const char *) s1;
	ss2 = (unsigned const char *) s2;
	while (i < n && (ss1[i] || ss2[i]))
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
//Compara duas strings ate n caracteres e diz qual e maio, menor e igual
/*#include <stdio.h>

int main(void)
{
	const char *c1 = "Home is whenever im with you";
	const char *c2 = "Home Us whenever im with you";
	printf("%i\n",ft_strncmp(c1,c2,10));
	return 0;
}*/
