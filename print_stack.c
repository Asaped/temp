/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:48:30 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 20:30:57 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	print_stack(t_state *state)
{
	int	i;
	int	count;

	if (state->a_count > state->b_count)
		count = state->a_count;
	else
		count = state->b_count;
	printf("------------\n");
	i = count - 1;
	while (i >= 0)
	{
		printf("%i a = %i b = %i \n", i, state->a[i], state->b[i]);
		i--;
	}
	printf("------------\n");
}
