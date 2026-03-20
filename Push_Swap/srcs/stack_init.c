/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:00:30 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:18:53 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*stack_new(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}


void	stack_push(t_stack *stack, int value)
{
	t_node	*new;

	if (!stack)
		return ;
	
	new = malloc(sizeof(t_node));
	if (!new)
	{
		write(STDERR_FILENO, "Error\n", 6);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	
	new->index = -1;
	new->value = value;
	new->next = stack->top;
	stack->top = new;
	stack->size++;
}


int	stack_pop(t_stack *stack)
{
	t_node	*tmp;
	int		value;

	if (!stack || !stack->top)
		return (0);
	
	tmp = stack->top;
	value = tmp->value;
	stack->top = stack->top->next;
	free(tmp);
	stack->size--;
	return (value);
}


int	stack_peek(t_stack *stack)
{
	if (!stack || !stack->top)
		return (0);
	
	return (stack->top->value);
}

int	stack_is_sorted(t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
