/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 10:27:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 11:08:03 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
//apontar o novo(new ja declardo) para o inicio da lista existente (**lst)
//iniciar o ponteiro da lista existente(**lst) para o novo ponteiro(new)
//as estruturas correm do inicio ao fim, o primeiro ponteiro e muito importante
//#include <stdio.h>
/*
int main(void)
{
    t_list *lista = NULL;
    t_list *n1 = ft_lstnew("Segundo");
    t_list *n2 = ft_lstnew("Primeiro");

    ft_lstadd_front(&lista, n1);   // lista -> n1
    ft_lstadd_front(&lista, n2);   // lista -> n2 -> n1

    printf("%s\n", (char *)lista->content);          // Deve imprimir: "Primeiro"
    printf("%s\n", (char *)lista->next->content);    // Deve imprimir: "Segundo"

    free(n1);
    free(n2);

    return 0;
}*/
