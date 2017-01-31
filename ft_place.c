/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 12:20:44 by bviala            #+#    #+#             */
/*   Updated: 2017/01/19 15:46:55 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_pulltetri(t_tetri *tetri, char **grid)
{
	int		i;
	int		j;
	char	c;

	c = ft_whichletter(tetri->t);
	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (grid[i][j] >= c && grid[i][j] <= 'Z')
				grid[i][j] = '.';
			j++;
		}
		i++;
	}
}

void	ft_puttetri(t_tetri *tetri, char **grid, int row, int col)
{
	int k;
	int i;
	int j;

	k = 0;
	i = 0;
	while (grid[row] && i < 4)
	{
		j = 0;
		while (grid[row][col + j] && j < 4)
		{
			if (tetri->t[j + k] != '.' && grid[row][col + j] == '.')
				grid[row][col + j] = tetri->t[j + k];
			j++;
		}
		k = k + 5;
		row++;
		i++;
	}
}

int		ft_available(t_tetri *tetri, char **grid, int row, int col)
{
	int k;
	int i;
	int j;
	int count;

	k = 0;
	i = 0;
	count = 0;
	while (grid[row] && i < 4)
	{
		j = 0;
		while (grid[row][col + j] && j < 4)
		{
			if (tetri->t[j + k] != '.' && grid[row][col + j] == '.')
				count++;
			j++;
		}
		k = k + 5;
		row++;
		i++;
	}
	return (count);
}

int		ft_place(t_tetri *tetri, char **grid, int row, int col)
{
	t_tetri *stock;

	if (tetri == NULL)
		return (1);
	stock = tetri;
	while (grid[row])
	{
		if (ft_available(stock, grid, row, col) == 4)
		{
			ft_puttetri(stock, grid, row, col);
			if (ft_place(stock->next, grid, 0, 0))
				return (1);
			else
				ft_pulltetri(stock, grid);
		}
		if (grid[row][col + 1] == '\0')
		{
			row++;
			col = 0;
		}
		else
			col++;
	}
	return (0);
}
