/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:00:00 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 14:59:58 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_is_overflow(char *str)
{
	long	n;

	n = ft_atol(str);
	if (n > 2147483647 || n < -2147483648)
		return (1);
	return (0);
}

int	ft_duplicates(t_stack *a)
{
	t_node	*i;
	t_node	*j;

	i = a -> top;
	while (i)
	{
		j = i -> next;
		while (j)
		{
			if (i -> value == j -> value)
				return (1);
			j = j -> next;
		}
		i = i -> next;
	}
	return (0);
}

void	parse_args(int ac, char *av[], t_stack *a)
{
	int		i;
	char	**split;

	i = ac - 1;
	while (i >= 1)
	{
		split = ft_split(av[i], ' ');
		if (!split || !split[0])
		{
			free_split(split);
			error_exit(a, NULL);
		}
		parse_split(split, a);
		free_split(split);
		i--;
	}
	if (ft_duplicates(a))
		error_exit(a, NULL);
}
