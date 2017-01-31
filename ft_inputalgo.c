/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputalgo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:59:52 by prossi            #+#    #+#             */
/*   Updated: 2017/01/11 18:07:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_inputalgo(char *buf)
{
	t_tetri		*tetri;
	int			count_tetri;

	count_tetri = ft_countetri(buf);
	tetri = ft_list(buf);
	tetri = ft_upleft(tetri, count_tetri);
	return (tetri);
}
