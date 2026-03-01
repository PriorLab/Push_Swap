/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:00:30 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/01 17:28:00 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

Stack *stack_new (void)
{
	Stack *stack;

	stack = malloc(sizeof(Stack));
	if (!stack)
		return(NULL);
	stack->top = NULL;
}

void stack_push(Stack *stack, int value)
{
	Node	*new;

	new = malloc(sizeof(Node));
	if (!new)
		return ;
	new -> value = value;
	new -> index = -1;
	new -> next = stack -> top;
	stack -> size ++;
}
int stack_pop(Stack	*stack)
{

}
