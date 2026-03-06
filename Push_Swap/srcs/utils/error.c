/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:05:40 by alemigue          #+#    #+#             */
/*   Updated: 2026/03/06 11:23:25 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void error_exit(t_stack *a, t_stack *b)
{
    // 1. Limpar memória (free dos nós das stacks)
    if (a) free_stack(a);
    if (b) free_stack(b);
    
    // 2. Imprimir mensagem de erro
    write(STDERR_FILENO, "Error\n", 6);
    
    // 3. Terminar o programa imediatamente
    exit(EXIT_FAILURE);  // ou exit(1)
}
