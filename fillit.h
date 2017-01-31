/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:20:41 by bviala            #+#    #+#             */
/*   Updated: 2017/01/19 23:20:20 by bviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"

# define BUF_SIZE 4096

typedef struct	s_tetri
{
	char			*t;
	struct s_tetri	*next;
}				t_tetri;

char			ft_whichletter(char *t);
int				ft_sqr(int n);
int				ft_list_size(t_tetri *begin_tetri);
int				ft_isaletter(char c);
void			ft_pulltetri(t_tetri *tetri, char **grid);
void			ft_puttetri(t_tetri *tetri, char **grid, int row, int col);
int				ft_available(t_tetri *tetri, char **grid, int row, int col);
int				ft_solve(t_tetri *tetri, char **grid, int row, int col);
char			**ft_grid(t_tetri *tetri, int s);
void			ft_print_square(t_tetri *tetri);
int				ft_place(t_tetri *begin_tetri, char **grid, int row, int col);
int				ft_openfile(char *file);
int				ft_closefile(int fd);
char			*ft_readfile(int fd);
int				ft_checkfile(char *buf);
int				ft_checkspace(char *buf);
int				ft_checkform(char *buf);
int				ft_checkchar(char *buf);
int				ft_tetriform(char *buf);
t_tetri			*ft_list(char *buf);
t_tetri			*ft_listnew(char *str);
t_tetri			*ft_upleft(t_tetri *tetri, int count_tetri);
t_tetri			*ft_inputalgo(char *buf);
int				ft_checkconnect(char *buf);
int				ft_countetri(char *buf);

#endif
