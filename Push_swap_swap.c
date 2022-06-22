/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:24:01 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 15:57:07 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Push_swap.h"

static void	swap(int *stack, int count)
{
	int	temp;

	if (count >= 2)
	{
		temp = stack[count - 1];
		stack[count - 1] = stack[count - 2];
		stack[count - 2] = temp;
	}
}

void	sa(t_state *state)
{
	swap(state->a, state->a_count);
	write(1, "sa\n", 3);
}

void	sb(t_state *state)
{
	swap(state->b, state->b_count);
	write(1, "sb\n", 3);
}

void	ss(t_state *state)
{
	swap(state->a, state->a_count);
	swap(state->b, state->b_count);
	write(1, "ss\n", 3);
}
