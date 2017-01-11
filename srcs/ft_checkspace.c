/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 14:03:15 by prossi            #+#    #+#             */
/*   Updated: 2017/01/11 18:31:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkspace(char *buf)
{
	int		i;

	i = 0;
	if (buf[0] == '\0')
		return (1);
	while (buf[i])
	{
		if (buf[i] == '\n' && buf[i + 2] == '\n')
			return (1);
		if (buf[0] == '\n' || buf[ft_strlen(buf) - 2] == '\n')
			return (1);
		i++;
	}
	return (0);
}
