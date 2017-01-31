/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 18:09:36 by bviala            #+#    #+#             */
/*   Updated: 2017/01/13 13:06:48 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	ft_whichletter(char *t)
{
	int		i;

	i = 0;
	if (!t)
		return (0);
	while (t[i] == '.')
		i++;
	return (t[i]);
}

int		ft_sqr(int n)
{
	int sqr;
	int result;

	sqr = 0;
	result = 0;
	while (sqr < n)
	{
		if (sqr * sqr <= n)
			result = sqr;
		sqr++;
	}
	return (result);
}

int		ft_list_size(t_tetri *begin_tetri)
{
	int		i;
	t_tetri *current;

	i = 1;
	current = begin_tetri;
	if (current == NULL)
		return (0);
	while (current->next)
	{
		current = current->next;
		i++;
	}
	return (i);
}

int		ft_isaletter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
