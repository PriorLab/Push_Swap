/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:12 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:10:33 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_size(t_stack *a)
{
	return (a->size);
}

static void	find_min_and_assign(t_stack *a, int index)
{
	t_node	*current;
	t_node	*min_node;
		int	min;

	current = a->top;
	min_node = NULL;
	min = INT_MAX;
	while (current)
	{
		if (current->index == -1 && current->value < min)
		{
			min = current->value;
			min_node = current;
		}
		current = current->next;
	}
	if (min_node)
		min_node->index = index;
}

void	assign_indexes(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		find_min_and_assign(a, i);
		i++;
	}
}
