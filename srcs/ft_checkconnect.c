/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkconnect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:52:43 by prossi            #+#    #+#             */
/*   Updated: 2017/01/18 14:16:48 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkconnect(char *buf)
{
	int		i;
	int		j;
	int		connect;

	i = -1;
	j = 0;
	connect = 0;
	while (buf[++i])
	{
		if (buf[i] == '#')
		{
			j++;
			connect = ft_tetriform(buf, i, connect);
		}
		if (j == 4)
		{
			if (connect != 6 && connect != 8)
				return (1);
			j = 0;
			connect = 0;
		}
	}
	return (0);
}
