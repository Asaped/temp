/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_find_max.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:05:20 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/30 19:07:36 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	find_max(t_state *state)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < state->a_count)
	{
		if (state->a[pos] < state->a[i])
			pos = i;
		i++;
	}
	return (pos);
}

int	find_min(t_state *state)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < state->a_count)
	{
		if (state->a[pos] > state->a[i])
			pos = i;
		i++;
	}
	return (pos);
}
