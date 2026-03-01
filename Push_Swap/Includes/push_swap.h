/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:59:29 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/01 17:26:22 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdlib.h> 
#include <stdlib.h>

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

// ─── Stack Init ───────────────────────────────────────────
