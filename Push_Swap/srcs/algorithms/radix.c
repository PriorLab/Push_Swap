/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:04:38 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:23:33 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

static int	get_num_bits(int size)
{
	int	num_bits;

	num_bits = 0;
	while ((1 << num_bits) < size)
		num_bits++;
	return (num_bits);
}

static void	radix_pass(Stack *a, t_stack *b, int bit)
{
	int	size;
	int	i;

	size = a->size;
	i = 0;
	while (i < size)
	{
		if (((a->top->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
	}
}

static void	push_back(t_stack *a, t_stack *b)
{
	while (b->top)
		pa(a, b);
}

void	sort_radix(t_stack *a; t_stack *b)
{
	int	num_bits;
	int	bit;

	num_bits = get_num_bits(a->size);
	bit = 0;
	while (bit < num_bits)
	{
		radix_pass(a, b, bit);
		push_back(a, b);
		bit++;
	}
}
