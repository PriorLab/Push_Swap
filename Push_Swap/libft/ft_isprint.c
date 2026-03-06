/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:24:46 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 19:12:36 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include<stdio.h>
int	main(int argc,char *argv[])
{
	int i = 1;
		if (argc > 1)
			while (i<argc)
			{
			printf("argv[%d] = %d\n",i,ft_isprint(argv[i][0]));
			i++;
			}
	return(2);
}*/
//Do ' ' ao ultimo nr printavel da tabela ascii '~'
