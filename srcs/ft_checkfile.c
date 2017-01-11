/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 12:27:29 by prossi            #+#    #+#             */
/*   Updated: 2017/01/09 13:21:29 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkfile(char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_checkspace(buf) == 1)
		return (1);
	if (ft_checkform(buf) == 1)
		return (1);
	if (ft_checkchar(buf) == 1)
		return (1);
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			j++;
			if (ft_tetriform(buf, i, j) == 1)
				return (1);
		}
		if (j == 4)
			j = 0;
		i++;
	}
	return (0);
}
