/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_tree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:41:07 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/30 19:41:08 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	push_swap_tree(t_state *state)
{
	int	max;

	max = find_max(state);
	if (state->a_count == 3)
	{
		if (max == 1)
			rra(state);
		if (max == 2)
			ra(state);
		if (state->a[1] < state->a[2])
			sa(state);
	}	
}
