/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:34:56 by matorgue          #+#    #+#             */
/*   Updated: 2023/12/04 07:10:49 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index_b(t_list *tabB)
{
	int	i;
	int	cout;
	int	index;

	cout = 10000;
	i = 0;
	index = 0;
	while (i < ft_end(tabB))
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
void	ft_up_b(t_list *tabB, int index)
{
	while (index < ft_end(tabB))
	{
		ft_rb(tabB, 1);
		index++;
	}
}
void	ft_down_b(t_list *tabB, int index)
{
	while (index > -1)
	{
		ft_rrb(tabB, 1);
		index--;
	}
}
void	ft_down_a(t_list *tabA, int index)
{
	while (index >= 0)
	{
		ft_rra(tabA, 1);
		index--;
	}
}

void	ft_up_a(t_list *tabA, int index)
{
	while (index < ft_end(tabA))
	{
		ft_ra(tabA, 1);
		index++;
	}
}

void	ft_swap_for_b(t_list *tabB)
{
	int	index;

	index = ft_index_b(tabB);
	if (ft_end(tabB) - index <= index + 1)
		ft_up_b(tabB, index);
	else
		ft_down_b(tabB, index);
}

void	ft_swap_for_a(t_list *tabA, int value)
{
	int	index;

	index = ft_index_a(tabA, value);
	if (ft_end(tabA) - index <= index + 1 || index == ft_end(tabA))
		ft_up_a(tabA, index);
	else
		ft_down_a(tabA, index);
}

int	ft_index_a(t_list *tabA, int value)
{
	int j;

    j = 0;
    if (tabA[ft_end(tabA)].value > value && tabA[0].value < value)
        return (ft_end(tabA));
    while (j + 1 <= ft_end(tabA))
    {
        if (tabA[j].value > value && tabA[j + 1].value < value)
            return (j);
        j++;
    }
    return (-1);
}
