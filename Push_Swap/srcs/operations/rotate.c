/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:45 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/08 15:35:17 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Include/push_swap.h"

static void rotate(Stack *stack)
{
	Node	*top;
	Node	*bottom;

	if(!stack->top || !stack->top->next)
		return ;
	top = stack->top;
	stack->top = top->next;
	top->next = NULL;
	bottom = stack->top;
	while(bottom->next)
		bottom = bottom->next;
	bottom->next = top;
}

void ra(Stack* a)
{
	rotate(a);
	ft_printf("ra\n");
}

void rb(Stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void rr(Stack *a, Stack *b)
{
	rotate(a);
	rotate(b);
	printf("rr\n");
}
