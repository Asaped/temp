/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:33:41 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/30 19:22:06 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdlib.h>
#include <unistd.h>

static int	push_swap_sort(t_state *state)
{
	if (state->a_count == 0 || state->a_count == 1)
		return (0);
	else if (state->a_count == 2)
	{
		if (state->a[0] < state->a[1])
			ra(state);
	}
	else if (state->a_count == 3)
		push_swap_tree(state);
	else if (state->a_count == 4 || state->a_count == 5)
		push_swap_for_five(state);
	else
		radix_sort(state);
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**parts;
	t_state	state;

	state = (t_state){0};
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		parts = ft_split(argv[1], ' ');
		if (!parts)
			return (0);
		if (!parse_arg(count_parts(parts), parts, &state))
			return (0);
		i = -1;
		while (parts[++i])
			free(parts[i]);
		free(parts);
	}
	else if (!parse_arg(argc - 1, &argv[1], &state))
		return (0);
	opti_tab(&state);
	push_swap_sort(&state);
	free(state.a);
	free(state.b);
}
