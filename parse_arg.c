/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:59:04 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 20:30:56 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static t_bool	ft_atoi(int *res, char *str)
{
	int	value;
	int	signe;

	signe = 1;
	value = 0;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10;
		value = value + *str - '0';
		str++;
		if (value < 0)
			return (0);
	}
	if (*str != 0)
		return (0);
	*res = value * signe;
	return (1);
}

static int	has_double(t_state *state)
{
	int	i;
	int	j;

	i = 0;
	while (i < state->a_count)
	{
		j = 0;
		while (j < i)
		{
			if (state->a[i] == state->a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	parse_arg(int count, char **value, t_state *state)
{
	int	i;

	i = 0;
	state->a = malloc(count * sizeof(int));
	if (!state->a)
		return (0);
	state->b = malloc(count * sizeof(int));
	if (!state->b)
		return (0);
	if (count >= 2)
	{
		while (value[i] != 0)
		{
			if (!ft_atoi(&state->a[count - 1 - i], value[i]))
				return (write(1, "Error\n", 6), 0);
			state->a_count++;
			i++;
		}
	}
	if (has_double(state))
		return (write(1, "Error\n", 6), 0);
	return (1);
}
