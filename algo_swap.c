/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:34:56 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:09 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index_b(t_list *tabb)
{
	int	i;
	int	cout;
	int	index;

	cout = 10000;
	i = 0;
	index = 0;
	while (i < ft_end(tabb))
	{
		if (cout > tabb[i].cout)
		{
			index = i;
			cout = tabb[i].cout;
		}
		i++;
	}
	return (index);
}

void	ft_up_b(t_list *tabb, int index)
{
	while (index < ft_end(tabb))
	{
		ft_rb(tabb, 1);
		index++;
	}
}

void	ft_down_b(t_list *tabb, int index)
{
	while (index > -1)
	{
		ft_rrb(tabb, 1);
		index--;
	}
}

void	ft_down_a(t_list *taba, int index)
{
	while (index >= 0)
	{
		ft_rra(taba, 1);
		index--;
	}
}

void	ft_up_a(t_list *taba, int index)
{
	while (index < ft_end(taba))
	{
		ft_ra(taba, 1);
		index++;
	}
}
