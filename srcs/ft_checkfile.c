/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 12:27:29 by prossi            #+#    #+#             */
/*   Updated: 2017/01/03 17:41:08 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkfile(char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buf[i])
	{
		if (buf[i] != '#' && buf[i] != '.' && buf[i] != '\n')
			return (1);
		if (buf[i] == '\n' && buf[i + 2] && buf[i + 2] == '\n')
			return (1);
		if (buf[0] == '\n' || buf[ft_strlen(buf) - 2] == '\n')
			return (1);
		if (buf[i] == '\n')
		{
			j++;
			if (j == 4 && (buf[i + 1] == '.' || buf[i + 1] == '#'))
				return (1);
			if (j == 4)
				j = j - 5;
		}
		i++;
	}
	return (0);
}
