/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:58:35 by prossi            #+#    #+#             */
/*   Updated: 2017/01/18 14:18:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft.h"

# define BUF_SIZE 4096

typedef struct 	s_tetri
{
	char			*t;
	struct s_tetri	*next;
}				t_tetri;

int				ft_openfile(char *file);
int				ft_closefile(int fd);
char			*ft_readfile(int fd);
int				ft_checkfile(char *buf);
int				ft_checkspace(char *buf);
int				ft_checkform(char *buf);
int				ft_checkchar(char *buf);
int				ft_checkconnect(char *buf);
int				ft_tetriform(char *buf, int i, int connect);
int				ft_countetri(char *buf);
t_tetri			*ft_list(char *buf);
t_tetri			*ft_listnew(char *str);
t_tetri			*ft_upleft(t_tetri *tetri, int count_tetri);
t_tetri			*ft_inputalgo(char *buf);

#endif
