/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:20:16 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 08:20:17 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] && (unsigned char)s2[i] && i < n - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
