/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:09:12 by matorgue          #+#    #+#             */
/*   Updated: 2023/12/18 17:23:51 by matorgue         ###   ########.fr       */
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
			if ((av[i][j] < '0' && av[i][j] > '9') && av[i][j] != '-'
				&& av[i][j] != '+' && av[i][j] != ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_double(t_list *tabA)
{
	int	i;
	int	j;

	i = 0;
	while (tabA[i].end != 1)
	{
		j = i + 1;
		while (tabA[j].end != 1)
		{
			if (tabA[i].value == tabA[j].value)
				return(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_max_error(t_list *tabA)
{
	int	i;

	i = 0;
	while (tabA[i].end != 1)
	{
		if (tabA[i].value > 2147483647 || tabA[i].value < -2147483648)
			return (1);
		i++;
	}
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
