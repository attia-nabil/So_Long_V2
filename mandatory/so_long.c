/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:20:43 by nattia            #+#    #+#             */
/*   Updated: 2022/03/02 22:51:33 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_variable *variable)
{
	ft_finder(variable);
	ft_keyhok_up_left(variable, keycode);
	keyhoks_down_right(variable, keycode);
	if (keycode == 53)
	{
		mlx_destroy_window(variable->mlx, variable->mlx_win);
		exit (0);
	}
	ft_putnbr(variable->move);
	ft_putstr("\n");
	mlx_clear_window(variable->mlx, variable->mlx_win);
	ft_rander(variable);
	return (0);
}

int	ft_exit(void)
{
	exit (0);
}

void	main_too(int ac, char **c, int fd)
{
	char	*dot;

	if (ac != 2)
	{
		ft_putstr("error parametre");
		exit(0);
	}
	dot = ft_strrchr(c[1], '.');
	if (!dot || ft_strncmp(dot, ".ber", 5) != 0)
	{
		ft_putstr("error parametre .ber nedded");
		exit(0);
	}
	if (fd == -1)
	{
		perror("open");
		exit(0);
	}
}

static void	__norm(t_variable *variable)
{
	variable->l = calcule_l(variable->p);
	variable->w = calcule_w(variable->p);
	variable->mlx = mlx_init();
}

int	main(int ac, char **c)
{
	t_variable	variable;
	t_map		so_te;
	int			fd;
	char		tr[99999];

	fd = open(c[1], O_RDONLY);
	main_too(ac, c, fd);
	variable.p = parcing_map(fd, tr);
	if (!variable.p[0])
		return (ft_putstr("empty map\n"), free(variable.p), 0);
	__norm(&variable);
	variable.n = testeur_map(variable.p, &so_te);
	if (variable.n == 0)
	{
		ft_putstr("error map");
		exit (0);
	}
	variable.mlx_win = mlx_new_window(variable.mlx, (variable.l * 100),
			(variable.w * 100), "so_long");
	ft_converter(&variable);
	ft_rander(&variable);
	mlx_hook(variable.mlx_win, 2, 0, key_hook, &variable);
	mlx_hook(variable.mlx_win, 17, 0, ft_exit, &variable);
	variable.k = so_te.c;
	mlx_loop(variable.mlx);
}
