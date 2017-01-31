/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:42:31 by bviala            #+#    #+#             */
/*   Updated: 2017/01/19 23:26:03 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_solve(t_tetri *tetri, char **grid, int row, int col)
{
	if (ft_isaletter(grid[row][col]))
	{
		if (grid[row][col + 1] == '\0')
			return (ft_solve(tetri, grid, row + 1, 0));
		return (ft_solve(tetri, grid, row, col + 1));
	}
	return (ft_place(tetri, grid, row, col));
}

char	**ft_grid(t_tetri *tetri, int s)
{
	int		i;
	int		j;
	char	**grid;

	i = 0;
	if (!(grid = (char **)malloc(sizeof(char **) * (s + 1))))
		return (NULL);
	while (i < s)
	{
		if (!(grid[i] = (char *)malloc(sizeof(char *) * (s + 1))))
			return (NULL);
		j = 0;
		while (j < s)
		{
			grid[i][j] = '.';
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	grid[i] = NULL;
	if (ft_solve(tetri, grid, 0, 0))
		return (grid);
	free(grid);
	return (ft_grid(tetri, s + 1));
}

void	ft_print_square(t_tetri *tetri)
{
	int		i;
	char	**grid;
	int		nb_tetri;
	int		s_min;

	nb_tetri = ft_list_size(tetri);
	s_min = ft_sqr(nb_tetri * 4);
	grid = ft_grid(tetri, s_min);
	if (grid)
	{
		i = 0;
		while (grid[i])
		{
			ft_putstr(grid[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
