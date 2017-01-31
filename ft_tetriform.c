/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetriform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:58:41 by prossi            #+#    #+#             */
/*   Updated: 2017/01/19 23:20:51 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check(char *buf, int i)
{
	int	connect;

	connect = 0;
	if (buf[i + 1] && buf[i + 1] == '#')
		connect++;
	if (buf[i + 5] && buf[i + 5] == '#' && i < 16)
		connect++;
	if (buf[i - 1] && buf[i - 1] == '#')
		connect++;
	if (buf[i - 5] && buf[i - 5] == '#' && i > 4)
		connect++;
	return (connect);
}

int		ft_tetriform(char *buf)
{
	int		i;
	int		connect;

	i = 0;
	connect = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
			connect = connect + ft_check(buf, i);
		i++;
	}
	return (connect);
}
