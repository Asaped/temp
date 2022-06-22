/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:50:00 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 17:12:59 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static void	reverse_rotate(int *stack, int count)
{
	int	i;
	int	temp;
	int	temp2;

	i = count - 1;
	if (count >= 2)
	{
		temp2 = stack[0];
		while (i >= 0)
		{
			temp = stack[i];
			stack[i] = temp2;
			temp2 = temp;
			i--;
		}
	}
}

void	rra(t_state *state)
{
	reverse_rotate(state->a, state->a_count);
	write(1, "rra\n", 4);
}

void	rrb(t_state *state)
{
	reverse_rotate(state->b, state->b_count);
	write(1, "rrb\n", 4);
}

void	rrr(t_state *state)
{
	reverse_rotate(state->a, state->a_count);
	reverse_rotate(state->b, state->b_count);
	write(1, "rrr\n", 4);
}
