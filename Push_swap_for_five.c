/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_for_five.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:13:28 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/30 19:36:15 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Push_swap.h"

void	push_swap_for_five(t_state *state)
{
	int	min;
	int	min_pos;

	while (state->a_count > 3)
	{
		min = state->a[find_min(state)];
		min_pos = find_min(state);
		if (min_pos > (state->a_count / 2))
		{
			while (state->a[state->a_count - 1] != min)
				ra(state);
		}
		else
		{
			while (state->a[state->a_count - 1] != min)
				rra(state);
		}
		pb(state);
	}
	push_swap_tree(state);
	if (state->b_count == 2 && state->b[0] > state->b[1])
		rb(state);
	while (state->b_count)
		pa(state);
}
