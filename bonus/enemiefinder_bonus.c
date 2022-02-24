/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemiefinder_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:19:03 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 08:19:09 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_finder_n(t_variable *p)
{
	p->up = 0;
	p->down = 0;
	while (p->p[p->up])
	{
		p->down = 0;
		while (p->p[p->up][p->down])
		{
			if (p->p[p->up][p->down] == 'N')
			{
				return ;
			}
			p->down++;
		}
		p->up++;
	}
}
