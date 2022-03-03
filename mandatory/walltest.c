/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walltest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:21:05 by nattia            #+#    #+#             */
/*   Updated: 2022/03/02 16:50:26 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	walltest(char **p, t_map *test)
{
	while (p[test->n] && p[test->n][0] == '1')
	{
		test->n++;
	}
	while (p[test->k] && p[test->k][test->j - 1] == '1')
	{
		test->k++;
	}
	if (test->n != test->k)
	{
		return (0);
	}
	while (test->l != test->k)
	{
		while (p[test->l][test->m])
		{
			test->m++;
		}
		test->l++;
	}
	if (test->m != test->i && test->m != test->j)
	{
		return (0);
	}
	return (1);
}

void	initialisation(t_map *test)
{
	test->i = 0;
	test->j = 0;
	test->j = 0;
	test->k = 0;
	test->l = 0;
	test->m = 0;
	test->n = 0;
	test->q = 0;
	test->q = 0;
	test->t = 0;
	test->pi = 0;
	test->pj = 0;
}

int	check_lines(char **p, t_map *test)
{
	while (p[test->n])
	{
		test->n++;
	}
	while (p[0][test->i] == '1')
	{
		test->i++;
	}
	while (p[test->n - 1][test->j] == '1')
	{
		test->j++;
	}
	if (test->i != test->j)
	{
		return (0);
	}
	return (1);
}

int	check_otherp(char **p, t_map *test)
{
	int	i;

	i = 0;
	while (p[test->pi] && test->pi < test->n)
	{
		test->pj = 0;
		while (test->pj < test->m)
		{
			if (p[test->pi][test->pj] == 'P')
			{
				i++;
			}
			test->pj++;
		}
		test->pi++;
	}
	if (i != 1)
	{
		return (0);
	}
	else
		return (1);
}
