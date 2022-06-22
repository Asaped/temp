/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_simplify.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:04:47 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 20:30:52 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
//bubble sort
static void	bubble_sort(int *new_tab, t_state *state)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < state->a_count - 1)
	{
		j = -1;
		while (++j < state->a_count - i - 1)
		{
			if (new_tab[j] > new_tab[j + 1])
			{
				temp = new_tab[j];
				new_tab[j] = new_tab[j + 1];
				new_tab[j + 1] = temp;
			}
		}
	}
}

static void	cpy_tab(int *new_tab, t_state *state)
{
	int	i;
	int	j;

	i = -1;
	while (++i < state->a_count)
	{
		j = -1;
		while (++j < state->a_count)
		{
			if (state->a[i] == new_tab[j])
			{
				state->a[i] = j + 1;
				break ;
			}
		}
	}
}

void	opti_tab(t_state *state)
{
	int	*new_tab;
	int	i;

	i = -1;
	new_tab = malloc((state->a_count) * sizeof (int));
	if (new_tab == 0)
		return ;
	while (++i < state->a_count)
		new_tab[i] = state->a[i];
	bubble_sort(new_tab, state);
	cpy_tab(new_tab, state);
	free(new_tab);
}
