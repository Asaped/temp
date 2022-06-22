/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:39:49 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/29 14:59:30 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef int	t_bool;

typedef struct s_state
{
	int	*a;
	int	a_count;
	int	*b;
	int	b_count;
}	t_state;

char	**ft_split(char const *s, char c);
int		count_parts(char **tab);
void	print_stack(t_state *state);

void	ra(t_state *state);
void	rb(t_state *state);
void	rr(t_state *state);

void	rra(t_state *state);
void	rrb(t_state *state);
void	rrr(t_state *state);

void	pa(t_state *state);
void	pb(t_state *state);
void	sa(t_state *state);
void	sb(t_state *state);
void	ss(t_state *state);

int		parse_arg(int count, char **value, t_state *state);

void	push_swap_tree(t_state *state);
int		find_max(t_state *state);
int		find_min(t_state *state);
void	push_swap_for_five(t_state *state);
void	radix_sort(t_state *state);
void	opti_tab(t_state *state);

#endif
