/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:43:19 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 13:43:20 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void    check_mber(int ac, char **av, int fd)
{
    if (ac != 2)
    {
        ft_putstr("Error Parameter");
        exit(0);
    }
    if (ft_strncmp(ft_strrchr(av[1], '.'), ".ber", 5) != 0)
	{
		ft_putstr("error parametre .ber nedded");
		exit(0);
	}
    if (fd == -1)
	{
		ft_putstr("error parametre map");
		exit_mapt (0);
	}
}


int main(int ac, char **av)
{
    t_variable variable;
    t_map       so_te;
    int         fd;
    char        tr[99999];

    fd = open(av[1], O_RDONLY); // open map RONLY
    check_mber(ac, av, fd); // check parameter and fd
    variable.p = parcing_map(fd, tr); // parcin map split
    variable.l = calcule_l(variable.p); // calcule lenght first line
    variable.w = calcule_w(variable.p); // calcule wight
    variable.mlx = mlx_init(); // establish a connection to the correct graphical system
    variable.n = testeur_map(variable.p, &so_te);
    if (variable.n == 0)
	{
		ft_putstr("error map");
		exit (0);
	}
    





}