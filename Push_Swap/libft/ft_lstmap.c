/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:01:20 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 12:19:55 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		newnode = ft_lstnew(tmp);
		if (!newnode)
		{
			del(tmp);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
//Iterates through the list ’lst’, applies the
//function ’f’ to each node’s content, and creates
//a new list resulting of the successive applications
//of the function ’f’. The ’del’ function is used to
//delete the content of a node if needed.
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>   // para free

int main(void)
{
    t_list *a = ft_lstnew("ola");
    t_list *b = ft_lstnew("mundo");
    t_list *new;

    a->next = b;
    new = ft_lstmap(a, (void *(*)(void *))ft_strdup, free);
    printf("%s\n", (char *)new->content);           // "ola"
    printf("%s\n", (char *)new->next->content);     // "mundo"
    // limpar lista criada pelo map
    ft_lstclear(&new, free);
    return (0);
}
*/
