/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:19:38 by prossi            #+#    #+#             */
/*   Updated: 2017/01/03 16:34:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int ac, char **av)
{
	int		fd;
	char	*buf;

	if (ac != 2)
		ft_putstr("usage: fillit source_file\n");
	else
	{
		if ((fd = ft_openfile(av[1])) == -1)
			return (1);
		buf = ft_readfile(fd);
		if (ft_readfile(fd) == NULL)
			return (1);
		if (ft_closefile(fd) == -1)
			return (1);
		if (ft_checkfile(buf) == 1)
		{
			ft_putstr("error\n");
		}
	}
	return (0);
}
