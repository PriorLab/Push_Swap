/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:13:10 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 17:36:35 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	curr = *lst;
	while (curr)
	{
		next = curr->next;
		del (curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
//Deletes and frees the given node and all its
//successors, using the function ’del’ and free(3).
//Finally, set the pointer to the list to NULL.
/*void ft_lstclear_rec(t_list **lst, void (*del)(void*))
{
t_list  *next;

if (!lst || !*lst || !del)
	return ;
next = (*lst)->next;
del((*lst)->content);
free(*lst);
*lst = next;
ft_lstclear_rec(lst, del);
}
*/
