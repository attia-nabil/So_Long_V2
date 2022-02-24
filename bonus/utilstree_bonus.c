/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilstree_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:15:43 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 08:16:06 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
		i++;
	j = i;
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (c == '\0')
	{
		return ((char *)&s[j]);
	}
	return (NULL);
}

int	calcule_l(char **p)
{
	int	i;

	i = 0;
	while (p[0][i])
	{
		i++;
	}
	return (i);
}

int	calcule_w(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		i++;
	}
	return (i);
}
