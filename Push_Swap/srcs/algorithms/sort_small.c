/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:04:25 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/08 21:13:15 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

static void sort_two(Stack *a)
{
	if(a->top->value > a->top->next->value)
		sa(a);
}

static void sort_three(Stack *a)
{
	int	top;
	int	mid;
	int	bot;
	
	top = a->top->value;
	mid = a->top->next->value;
	bot = a->top->next->next->value;

	if (top > mid && top > bot && mid < bot)
	

	if (top < mid && top < bot && mid > bot)

	if (top mid && top bot && mid bot)
	
	if ()

	if ()
}	
