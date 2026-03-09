/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:51:54 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/09 15:08:22 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

/* parsing */
int		ft_is_number(char *str);
long	ft_atol(char *str);
int		ft_duplicates(t_stack *stack);
void	parse_args(int ac, char *av[], t_stack *a);

/* stack init / utils */
t_stack	*stack_new(void);
void	stack_push(t_stack *stack, int value);
int		stack_pop(t_stack *stack);
int		stack_peek(t_stack *stack);
int		stack_is_sorted(t_stack *stack);
void	free_stack(t_stack *stack);
void	error_exit(t_stack *a, t_stack *b);
void    parse_split(char **split, t_stack *a);
void    free_split(char **split);

/* operations */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

/* indexing */
void	assign_indexes(t_stack *a);

/* algorithms */
void	sort_small(t_stack *a, t_stack *b);
void	sort_radix(t_stack *a, t_stack *b);

#endif
