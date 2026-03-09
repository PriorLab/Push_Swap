/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:05:46 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:17:18 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	free(stack);
}
