/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:03:26 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:19:49 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!b->top)
		return ;
	stack_push(a, stack_pop(b));
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->top)
		return ;
	stack_push(b, stack_pop(a));
	ft_printf("pb\n");
}
