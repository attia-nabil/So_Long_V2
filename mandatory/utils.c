/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:21:01 by nattia            #+#    #+#             */
/*   Updated: 2022/03/02 21:01:55 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_split(char const *s, char c)
{
	char	**ar;
	int		len;
	int		count;
	int		f;
	int		k;

	count = countword(s, c);
	f = 0;
	ar = (char **)malloc(sizeof(char *) * (count + 1)); // unprotected alloc
	if (!ar || !s)
		exit(0);
	while (f < count)
	{
		s = skipspace(s, c);
		len = lenword(s, c);
		ar[f] = (char *)malloc(sizeof(char) * (len + 1));  // unprotected alloc
		if (!ar[f])
			return (ft_free(ar), exit(1), NULL);
		k = 0;
		while (k < len)
			ar[f][k++] = *s++;
		ar[f++][k] = '\0';
	}
	ar[f] = NULL;
	return (ar);
}

size_t	ft_strlen(char *p)
{
	size_t	i;

	i = 0;
	if (!p)
		return (0);
	while (p[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	calcule_l(char **p)
{
	int	i;

	i = 0;
	while (p[0] && p[0][i])
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
