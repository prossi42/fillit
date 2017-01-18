/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetriform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:30:09 by prossi            #+#    #+#             */
/*   Updated: 2017/01/12 15:16:15 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_tetriform(char *buf, int i, int j)
{
	if (j == 4)
	{
		if (buf[i - 5] && buf[i - 5] == '#')
			return (0);
	}
	if (buf[i - 1] && buf[i - 1] == '#')
		return (0);
	if (buf[i + 1] && buf[i + 1] == '#')
		return (0);
	if (buf[i + 5] && buf[i + 5] == '#')
		return (0);
	return (1);
}
