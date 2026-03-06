/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 10:08:25 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 10:47:08 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*beginning;

	beginning = malloc(sizeof(t_list));
	if (!beginning)
		return (NULL);
	beginning->content = content;
	beginning->next = NULL;
	return (beginning);
}
/*
#include <stdio.h>

int main (void)
{
	t_list	*node;

	node = ft_lstnew("Teste");
	printf("%s\n", (char*)node->content);
	free(node);
	return (0);
	
}*/
