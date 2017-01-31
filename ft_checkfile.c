/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 12:27:29 by prossi            #+#    #+#             */
/*   Updated: 2017/01/19 19:07:22 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkfile(char *buf)
{
	int		i;
	int		j;
	int		connect;

	i = -1;
	j = 0;
	connect = 0;
	if (ft_checkspace(buf) == 1)
		return (1);
	if (ft_checkform(buf) == 1)
		return (1);
	if (ft_checkchar(buf) == 1)
		return (1);
	if (ft_countetri(buf) > 26)
		return (1);
	if (ft_checkconnect(buf) == 1)
		return (1);
	return (0);
}
