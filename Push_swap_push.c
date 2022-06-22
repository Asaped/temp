/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:35:45 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 17:11:43 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static void	push(int *from, int *to, int *count_from, int *count_to)
{
	if (*count_from == 0)
		return ;
	to[*count_to] = from[*count_from - 1];
	from[*count_from - 1] = 0;
	*count_to += 1;
	*count_from -= 1;
}

void	pa(t_state *state)
{
	push(state->b, state->a, &state->b_count, &state->a_count);
	write(1, "pa\n", 3);
}

void	pb(t_state *state)
{
	push(state->a, state->b, &state->a_count, &state->b_count);
	write(1, "pb\n", 3);
}
