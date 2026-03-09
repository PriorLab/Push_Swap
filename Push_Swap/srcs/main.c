/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:59:52 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:20:42 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort(t_stack *a, t_stack *b)
{
	if (stack_is_sorted(a))
		return ;
	assign_indexes(a);
	if (a->size <= 5)
		sort_small (a, b);
	else
		sort_radix (a, b);
}

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = stack_new();
	b = stack_new();
	if (!a || !b)
		return (1);
	parse_args(ac, av, a);
	sort(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
