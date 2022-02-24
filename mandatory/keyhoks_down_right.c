/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhoks_down_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:20:27 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 08:20:28 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	keyhoks_parttoo(t_variable *variable, int keycode)
{
	if (keycode == 1)
	{
		if (variable->p[variable->i + 1][variable->j] == '0' )
		{
			variable->p[variable->i + 1][variable->j] = 'P';
			variable->p[variable->i][variable->j] = '0';
			variable->i -= 1;
			variable->move += 1;
		}
		else if (variable->p[variable->i + 1][variable->j] == 'C')
		{
			variable->p[variable->i + 1][variable->j] = 'P';
			variable->p[variable->i][variable->j] = '0';
			variable->i -= 1;
			variable->k--;
			variable->move += 1;
		}
		else if (variable->p[variable->i + 1][variable->j] == 'E'
			&& variable-> k == 0)
		{
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
	}
}

void	keyhoks_down_right(t_variable *variable, int keycode)
{
	if (keycode == 0)
	{
		if (variable->p[variable->i][variable->j - 1] == '0')
		{
			variable->p[variable->i][variable->j - 1] = 'P';
			variable->p[variable->i][variable->j] = '0';
			variable->i -= 1;
			variable->move += 1;
		}
		else if (variable->p[variable->i][variable->j - 1] == 'C')
		{
			variable->p[variable->i][variable->j - 1] = 'P';
			variable->p[variable->i][variable->j] = '0';
			variable->i -= 1;
			variable->k--;
			variable->move += 1;
		}
		else if (variable->p[variable->i][variable->j - 1] == 'E'
			&& variable-> k == 0)
		{
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
	}
	keyhoks_parttoo(variable, keycode);
}
