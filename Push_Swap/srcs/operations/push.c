/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:26 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:19:49 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	move_top(t_stack *src, t_stack *dst)
{
	t_node	*node;

	if (!src->top)
		return ;
	node = src->top;
	src->top = src->top->next;
	src->size--;
	node->next = dst->top;
	dst->top = node;
	dst->size++;
}

void	pa(t_stack *a, t_stack *b)
{
	if (!b->top)
		return ;
	move_top(b, a);
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->top)
		return ;
	move_top(a, b);
	ft_printf("pb\n");
}
