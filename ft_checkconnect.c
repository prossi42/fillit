/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkconnect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:52:43 by prossi            #+#    #+#             */
/*   Updated: 2017/01/19 22:40:50 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkconnect(char *buf)
{
	int		i;
	int		j;
	int		connect;

	i = 0;
	j = 0;
	connect = 0;
	while (buf[i + 19])
	{
		connect = ft_tetriform(&buf[i]);
		if (connect != 6 && connect != 8)
			return (1);
		i = i + 21;
		connect = 0;
	}
	return (0);
}
