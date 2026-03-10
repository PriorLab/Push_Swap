/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:05:30 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:17:53 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	parse_split(char **split, t_stack *a)
{
	int	j;

	j = 0;
	while (split[j])
		j++;
	j--;
	while (j >= 0)
	{
		if (!ft_is_number(split[j]) || ft_is_overflow(split[j]))
		{
			free_split(split);
			error_exit(a, NULL);
		}
		stack_push(a, ft_atoi(split[j]));
		j--;
	}
}
