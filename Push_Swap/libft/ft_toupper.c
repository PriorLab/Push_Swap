/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:54:09 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 20:31:26 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
	return (0);
}

//Converte um caractere minúsculo para maiúsculo
/*#include<stdio.h>
int	main(void)
{
	printf("%c", ft_toupper('a'));
			}






int	main(int argc, char *argv[])      //Esta main nao esta funcional
{
	int i = 1;
	if (argc > 1)
		while(argc > i);
		{
			printf("argv[%d] = %d\n", i,ft_toupper(argv[i][0]));
			i++;
		}
}*/
