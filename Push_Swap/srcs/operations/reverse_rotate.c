/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:04:01 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:19:26 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	Node	*current;
	Node	*bottom;

	if (!stack->top || !stack->top->next)
		return ;
	current = stack->top;
	while (current->next->next)
		current = current ->next;
	bottom = current->next;
	current->next = NULL;
	bottom->next = stack->top;
	stack->top = bottom;
}

void	rra(t_stack *a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, Stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
