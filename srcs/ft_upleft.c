/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upleft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 15:30:44 by prossi            #+#    #+#             */
/*   Updated: 2017/01/11 14:21:02 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_left(char *str)
{
	int a;
	int b;
	int i;
	int j;

	a = 5;
	b = 10;
	i = 0;
	while (str[i] == '.' && str[i + a] == '.' && str[i + b] == '.')
			i++;
	j = 0;
	while (j < 20)
	{
		if (str[j] == '#' && i != 0)
		{
			str[j - i] = str[j];
			str[j] = '.';
		}
		j++;
	}
}

void		ft_switch_up(char *str)
{
	int		i;
	int		stock;

	i = 0;
	while (str[i] != '#')
		i++;
	stock = i;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			str[i - ((stock / 5) * 5)] = '#';
			if ((stock / 5) != 0)
				str[i] = '.';
		}
		i++;
	}
}

t_tetri		*ft_upleft(t_tetri *tetri, int count_tetri)
{
	char 	c;
	int		i;
	int		count;
	t_tetri	*begin_tetri;

	c = 'A';
	count = 0;
	begin_tetri = tetri;
	while (count < count_tetri)
	{
		ft_switch_up(tetri->t);
		ft_left(tetri->t);
		i = 0;
		while (i < 20)
		{
			if (tetri->t[i] == '#')
				tetri->t[i] = c;
			i++;
		}
		c++;
		count++;
		tetri = tetri->next;
	}
	return (begin_tetri);
}
