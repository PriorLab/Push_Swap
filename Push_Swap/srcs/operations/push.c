/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:26 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 15:44:07 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void pa(Stack *a, Stack *b)
{
	if(!b->top)
		return ;
	stack_push(a, stack_pop(b));
	ft_printf("pa\n");
}

void pb(Stack *a, Stack *b)
{
	if(!a->top)
		return ;
	stack_push(b, stack_pop(a));
	ft_printf("pb\n");
}
