/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:58:35 by prossi            #+#    #+#             */
/*   Updated: 2016/12/29 17:10:04 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"

int		ft_openfile(char *file);
int		ft_closefile(int fd);

#endif
