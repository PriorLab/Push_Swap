/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:00:30 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/01 12:32:32 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

Stack *stack_new (void)
{
	Stack *stack;

	stack = malloc(sizeof(Stack));
	if (!stack)
		return(NULL);
	stack->top = NULL;

}
