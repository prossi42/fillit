/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:47:04 by prossi            #+#    #+#             */
/*   Updated: 2017/01/09 17:10:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_listnew(char *str)
{
	t_tetri		*new;

	if (!(new = (t_tetri *)malloc(sizeof(t_tetri))))
		return (NULL);
	if (!(new->t = (char *)malloc(sizeof(char) * 21)))
		return (NULL);
	new->t = ft_strncpy(new->t, str, 20);
	new->t[20] = '\0';
	new->next = NULL;
	return (new);
}

t_tetri		*ft_list(char *buf)
{
	t_tetri		*begin_tetri;
	t_tetri		*current;
	t_tetri		*new;
	int			i;

	i = 21;
	begin_tetri = ft_listnew(buf);
	while (buf[i + 19])
	{
		current = begin_tetri;
		new = ft_listnew(&buf[i]);
		while (current->next)
			current = current->next;
		current->next = new;
		i = i + 21;
	}
	return (begin_tetri);
}
