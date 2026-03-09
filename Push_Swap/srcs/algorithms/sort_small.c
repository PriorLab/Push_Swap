/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:04:25 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:22:30 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

static void	sort_two(t_stack *a)
{
	if (a->top->value > a->top->next->value)
		sa(a);
}

static void	sort_three(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->top->value;
	mid = a->top->next->value;
	bot = a->top->next->next->value;
	if (top > mid && mid < bot && top < bot)
		sa(a);
	if (top > mid && mid < bot && top > bot)
		ra(a);
	if (top < mid && mid > bot && top > bot)
		rra(a);
	if (top > mid && mid > bot && top > bot)
	{
		sa(a);
		rra(a);
	}
	if (top < mid && mid > bot && top < bot)
	{
		rra(a);
		sa(a);
	}
}

static void	sort_five(t_stack *a, t_stack *b)
{
	while (a -> size > 3)
	{
		if (a->top->index == 0 || a->top->index == 1)
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	sort_two(b);
	while (b->top)
		pa(a,b);
}

void	sort_small(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else
		sort_five(a, b);
}
