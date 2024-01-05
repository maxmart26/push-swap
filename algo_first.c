/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:22:57 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:09 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_for_3(t_list *taba)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (taba[2].value > taba[1].value && taba[2].value > taba[0].value)
		{
			ft_ra(taba, 1);
			i++;
		}
		if (taba[2].value > taba[1].value)
			ft_sa(taba, 1);
		else if (taba[0].value != ft_int_max(taba))
			ft_rra(taba, 1);
		i++;
	}
}

int	ft_verif(t_list *taba)
{
	int	i;

	i = ft_end(taba);
	while (i > 0)
	{
		if (taba[i].value > taba[i - 1].value)
		{
			return (0);
		}
		i--;
	}
	return (1);
}

int	ft_int_min(t_list *taba)
{
	int	i;
	int	min;

	i = 0;
	min = taba[0].value;
	while (taba[i].end != 1)
	{
		if (min > taba[i].value)
			min = taba[i].value;
		i++;
	}
	if (min > taba[i].value)
		min = taba[i].value;
	return (min);
}

int	ft_int_max(t_list *taba)
{
	int	i;
	int	max;

	i = 0;
	max = taba[0].value;
	while (taba[i].end != 1)
	{
		if (max < taba[i].value)
			max = taba[i].value;
		i++;
	}
	if (max < taba[i].value)
		max = taba[i].value;
	return (max);
}

void	ft_swap_all_3(t_list *taba, t_list *tabb, int i)
{
	if (tabb[0].end == 2)
	{
		tabb[0] = taba[i];
		tabb[0].end = 1;
		tabb[1].end = 2;
		taba[i - 1].end = 1;
		write(1, "pb\n", 3);
	}
	else
		ft_pb(taba, tabb, 1);
}
