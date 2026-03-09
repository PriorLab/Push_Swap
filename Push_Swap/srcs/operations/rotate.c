/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:45 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:19:36 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate(t_stack *stack)
{
	Node	*top;
	Node	*bottom;

	if (!stack->top || !stack->top->next)
		return ;
	top = stack->top;
	stack->top = top->next;
	top->next = NULL;
	bottom = stack->top;
	while (bottom->next)
		bottom = bottom->next;
	bottom->next = top;
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
