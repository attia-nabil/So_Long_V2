/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:43:24 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 13:43:25 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct so_long
{
	void	*mlx;
	void	*mlx_win;
	void	*img_obj;
	char	**p;
	void	*wall;
	void	*floor;
	void	*player;
	void	*collect;
	void	*exit;
	int		k;
	int		j;
	int		x;
	int		i;
	int		n;
	int		y;
	int		l;
	int		w;
	int		move;
}t_variable;

typedef struct so_long_tester
{
	int	i;
	int	k;
	int	n;
	int	j;
	int	m;
	int	l;
	int	q;
	int	w;
	int	t;
	int	c;
}t_map;

void    ft_putchar(char c);
void    check_mber(int ac, char **av, int fd);
void    ft_putstr(char *s);


#endif