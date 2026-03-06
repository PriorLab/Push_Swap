/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:59:29 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 12:57:53 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "../libft/libft.h"

// ─── Structures ───────────────────────────────────────────

typedef struct Node
{
	int	value;
	int	index;
	struct	Node*  next;
}Node;

typedef struct Stack
{
	Node	*top;
	int	size;
}	Stack;

//___________utils____________________
void error_exit(t_stack *a, t_stack *b);
static void free_split(char **split);
static void parse_split(char **split, t_stack *a);
// ─── Stack Init ───────────────────────────────────────────
