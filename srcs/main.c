/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:19:38 by prossi            #+#    #+#             */
/*   Updated: 2016/12/29 17:15:25 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUF_SIZE 4096

int			main(int ac, char **av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	if (ac != 2)
		ft_putstr("usage: fillit source_file\n");
	else
	{
		if ((fd = ft_openfile(av[1])) == -1)
			return (1);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		if (ft_closefile(fd) == -1)
			return (1);
	}
	return (0);
}
