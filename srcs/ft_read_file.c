/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 16:33:06 by prossi            #+#    #+#             */
/*   Updated: 2016/12/29 17:08:16 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUF_SIZE 4096

char	*ft_read_file(int fd)
{
	int		ret;
	char	buf(BUF_SIZE + 1);

	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (ret == -1)
		ft_putstr("error\n");
	return (buf);
}
