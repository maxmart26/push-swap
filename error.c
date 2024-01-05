/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:09:12 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:01 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-'
				&& av[i][j] != '+' && av[i][j] != ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_double(t_list *taba)
{
	int	i;
	int	j;

	i = 0;
	while (taba[i].end != 1)
	{
		j = i + 1;
		while (taba[j].end != 1)
		{
			if (taba[i].value == taba[j].value)
				return (1);
			j++;
		}
		if (taba[i].value == taba[j].value)
			return (1);
		i++;
	}
	return (0);
}

int	ft_max_error(t_list *taba)
{
	int	i;

	i = 0;
	while (taba[i].end != 1)
	{
		if (taba[i].value > 2147483647 || taba[i].value < -2147483648)
			return (1);
		i++;
	}
	if (taba[i].value > 2147483647 || taba[i].value < -2147483648)
		return (1);
	return (0);
}

int	ft_number(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] != '-' && av[i][j] != '+' && (av[i][j] < '0'
					|| av[i][j] > '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
