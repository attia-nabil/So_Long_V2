/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing_map_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:19:29 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 08:19:30 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	**parcing_map(int fd, char *tr)
{
	char	str;
	int		b;
	int		h;
	char	**k;

	b = 1;
	h = 0;
	while (b != 0)
	{
		b = read(fd, &str, 1);
		if (b != 0)
			tr[h++] = str;
		tr[h] = '\0';
	}
	close(fd);
	k = ft_split(tr, '\n');
	return (k);
}
