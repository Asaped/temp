/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:51:22 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 20:31:02 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Push_swap.h"

static unsigned int	check_max_bits(t_state *state)
{
	unsigned int	i;
	int				has_bit;
	int				j;

	i = 1;
	while (i != 0)
	{
		j = -1;
		has_bit = 0;
		while (state->a_count > ++j)
		{
			if (state->a[j] & i)
			{
				has_bit = 1;
			}
		}
		if (!has_bit)
			return (i);
		i <<= 1;
	}
	return (1 << 31);
}

void	radix_sort(t_state *state)
{
	unsigned int	i;
	unsigned int	max_bit;
	int				j;
	int				count;

	max_bit = check_max_bits(state);
	i = 1;
	while (i < max_bit)
	{
		j = -1;
		count = state->a_count;
		while (++j < count)
		{
			if (!(state->a[state->a_count - 1] & i))
				pb(state);
			else
				ra(state);
		}
		while (state->b_count)
		{
			pa(state);
		}
		i <<= 1;
	}
}
