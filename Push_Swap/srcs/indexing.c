/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:12 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 15:26:01 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

static int ft_size(Stack *a)
{
	return(a->size);
}

static void find_min_and_assign(Stack *a, int index)
{
	Node	*current;
	Node	*min_node
	int	min;

	current = a->top
	min = INT_MAX;
	min_node = NULL;
	while (current)
	{
		if(current->index == -1 && current->value < min)
		{
			min = current->value;
			min_node = current;
		}
		current = current->next;
	}
	if (min_node)
		min_node->index = index;
}

void assign_indexes(Stack *a)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
	find_min_and_assign(a, i);
	i++;
	}
}
