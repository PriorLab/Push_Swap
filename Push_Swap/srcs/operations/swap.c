/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:36 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 16:07:14 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

static void swap(Stack	*stack)
{
	int first;
	int second;

	if(!stack->stop || !stack->top->next)
		return ;
	first = stack_pop(stack);
	second = stack_pop(stack);
	stack_push(stack, first);
	stack_push(stack, second);
}

void	sa(Stack *a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(Stack *b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(Stack *a, Stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
