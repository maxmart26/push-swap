/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:34:56 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/25 14:42:50 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index_for_swap(t_list *tabB)
{
	int	index;
	int	cout;
	int	i;

	cout = 1000;
	index = 0;
	i = 0;
	while (tabB[i].end != 1)
	{
		if (cout > tabB[i].cout)
		{
			index = i;
			cout = tabB[i].cout;
		}
		i++;
	}
	return (index);
}

int	ft_index_a(t_list *tabA, int value)
{
	int	index;
	int	i;

	i = 0;
	index = 0;
	while (tabA[i].end != 1)
	{
		if (value > tabA[i].value)
			index = i;
		i++;
	}
	return (index);
}

void	ft_swap(t_list *tabA, t_list *tabB)
{
	int	value;

	ft_swap_for_b(tabB);
	value = tabB[ft_end(tabB)].value;
	ft_swap_for_a(tabA, value);
	ft_pa(tabA, tabB, 1);
}

void	ft_swap_for_b(t_list *tabB)
{
	int	index;

	index = ft_index_for_swap(tabB);
	while (index != 0 || index != ft_end(tabB))
	{
		if (index + 1 < ft_end(tabB) - index)
		{
			ft_rrb(tabB, 1);
			index--;
			if (index == 0)
				ft_rrb(tabB, 1);
		}
		else
		{
			ft_rb(tabB, 1);
			index++;
		}
	}
}

void	ft_swap_for_a(t_list *tabA, int value)
{
	int	index;

	index = ft_index_a(tabA, value);
	while (index != 0 || index != ft_end(tabA))
	{
		if (index + 1 < ft_end(tabA) - index)
		{
			ft_rra(tabA, 1);
			index--;
			if (index == 0)
				ft_rra(tabA, 1);
		}
		else
		{
			ft_ra(tabA, 1);
			index++;
		}
	}
}
