/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadji-h <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:40:41 by snadji-h          #+#    #+#             */
/*   Updated: 2022/03/28 20:31:07 by snadji-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_count(char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (j == 1)
		{
			if (s[i] == c)
			{
				j = 0;
				count ++;
			}
		}
		else
			if (s[i] != c)
				j = 1;
		i++;
	}
	if (j == 1)
		count ++;
	return (count);
}

int	ft_count_parts(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

//pour le main
int	count_parts(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	int		j;
	int		i;
	int		parts;
	int		npart;

	i = 0;
	mem = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!mem)
		return (0);
	parts = ft_count(s, c);
	npart = 0;
	while (npart < parts)
	{
		while (s[i] && s[i] == c)
			i++;
		mem[npart] = malloc(ft_count_parts(&s[i], c) + 1);
		j = 0;
		while (s[i] && c != s[i])
			mem[npart][j++] = s[i++];
		mem[npart++][j] = 0;
	}
	mem[npart] = 0;
	return (mem);
}
/*
int main()
{
	char **text;
	int i;

	i = 0;
	text = ft_split("splitme", ' ');	
	while (text[i:
	] != 0)
	{
		printf("%s \n", text[i]);
		i++;
	}
	printf("\n%d  \n \n", ft_count("HELLOWORLD!", ' '));
	printf("%s  ", ft_split("    HELLO   WOLRLD  ! ", ' ')[2]);
}
*/
