/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:00:30 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 09:12:00 by alemigue         ###   ########.fr       */
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

void push(Stack *stack, int value)
{
	Node	*new;

	new = malloc(sizeof(Node));
	if (!new)
		return ;
	new -> value = value;
	new -> next = stack -> top;
	stack -> top = new;
	stack -> size ++;
}
int pop(Stack	*stack)
{
	Node *tmp;
	int value;

	tmp = stack -> top;
	value = tmp -> value;
	stack -> top = stack->top->next;
	free(tmp);
	stack->size--;
	return(value);
}

int peek(Stack	*stack)
{
	return(stack->top->value);
}

int sorted(Stack *stack)
{
	Node *current;

	current = stack -> top;
	while(current && current->next)
	{
		if (current -> value > current->next->value)
			eturn(0);
		current = current -> next;
	}
	return(1);
}
