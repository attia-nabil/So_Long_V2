/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:19:56 by nattia            #+#    #+#             */
/*   Updated: 2022/03/03 16:11:55 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_converter(t_variable *so)
{
	int	k;
	int	b;

	k = 0;
	b = 0;
	so->wall = mlx_xpm_file_to_image(so->mlx, "wall.xpm", &k, &b);
	so->floor = mlx_xpm_file_to_image(so->mlx, "floor.xpm", &k, &b);
	so->player = mlx_xpm_file_to_image(so->mlx, "player.xpm", &k, &b);
	so->collect = mlx_xpm_file_to_image(so->mlx, "collectable.xpm", &k, &b);
	so->exit = mlx_xpm_file_to_image(so->mlx, "exit.xpm", &k, &b);
}
