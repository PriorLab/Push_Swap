/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:47:13 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/07 11:59:48 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

static void add_one(unsigned int i, char *c)
{
    (void)i;
    (*c)++;
}

int main(void)
{
    char str[] = "abc";
    ft_striteri(str, add_one);
    printf("%s\n", str); // bcd
}
*/
