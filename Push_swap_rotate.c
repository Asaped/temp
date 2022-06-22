/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:54:26 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 17:14:13 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Push_swap.h"

static void	rotate(int *stack, int count)
{
	int	i;
	int	temp;
	int	temp2;

	i = 0;
	if (count >= 2)
	{
		temp2 = stack[count - 1];
		while (i < count)
		{
			temp = stack[i];
			stack[i] = temp2;
			temp2 = temp;
			i++;
		}
	}
}

void	ra(t_state *state)
{
	rotate(state->a, state->a_count);
	write(1, "ra\n", 3);
}

void	rb(t_state *state)
{
	rotate(state->b, state->b_count);
	write(1, "rb\n", 3);
}

void	rr(t_state *state)
{
	rotate(state->a, state->a_count);
	rotate(state->b, state->b_count);
	write(1, "rr\n", 3);
}
