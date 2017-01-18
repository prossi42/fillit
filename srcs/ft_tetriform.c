/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetriform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:58:41 by prossi            #+#    #+#             */
/*   Updated: 2017/01/12 17:07:21 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_tetriform(char *buf, int i, int connect)
{
	if (buf[i - 1] && buf[i - 1] == '#')
		connect++;
	if (buf[i + 1] && buf[i + 1] == '#')
		connect++;
	if (buf[i + 5] && buf[i + 5] == '#')
		connect++;
	if (buf[i - 5] && buf[i - 5] == '#')
		connect++;
	return (connect);
}
