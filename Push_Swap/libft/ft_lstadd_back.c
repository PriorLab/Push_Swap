/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:31:55 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 17:30:42 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;	

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
//This function concatenates, two nodes, first e need to create 2 nodes
//t_list nd1 = ft_lstnew("jose") <==> node 1 ==> [nd1]->NULL
//t_list nd2 = ft_lstnew("ramalho") <==> node 2 ==> [nd2]->NULL 
//ft_lstadd_back(&nd1, nd2) searches for the null in nd1 and overwrites it
//with the ramification of nd2, becomming<==> [nd1]->[nd2]->NULL
