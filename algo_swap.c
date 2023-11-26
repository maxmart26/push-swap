/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:34:56 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/26 17:14:57 by matorgue         ###   ########.fr       */
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
	while (index > -1)
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
	if (ft_end(tabA) - index <= index + 1)
		ft_up_a(tabA, index);
	else
		ft_down_a(tabA, index);
}

int	ft_index_a(t_list *tabA, int value)
{
	int	j;
	int	max;
	int	index_max;

	j = ft_end(tabA);
	max = ft_int_max(tabA);
	while (j >= 0)
	{
		if (tabA[j].value > value && tabA[j].value <= max)
		{
			max = tabA[j].value;
			index_max = j;
		}
		j--;
	}
	return (index_max);
}

/*
int	ft_index_for_swap(t_list *tabB)
{
	int	index;
	int	cout;
	int	i;

	cout = 1000;
	index = 0;
	i = 0;
	while (tabB[i - 1].end != 1)
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
	int	max;

	max = ft_int_max(tabA);
	i = 0;
	index = 0;
	while (i <= ft_end(tabA))
	{
		if (value > tabA[i].value && tabA[i].value <= max)
		{
			index = i;
			max = tabA[i].value;
		}
		i++;
	}
	//////printf(" value ;%d\n",value);
	return (index);
}

void	ft_swap(t_list *tabA, t_list *tabB)
{
	int	i;

	i = 0;
	while(tabB[i].end != 1)
	{
		////printf("%d avec %ld\n",i,tabB[i].value);
		i++;
	}
	ft_pa(tabA, tabB, 1);
}

void	ft_swap_for_b(t_list *tabB)
{
	int	index;

	index = ft_index_for_swap(tabB);
	//printf("%d\n",index);
	while (index != 0 && index != ft_end(tabB))
	{
		if (index < ft_end(tabB) - index)
		{
			ft_rrb(tabB, 1);
			index--;
			if (index == 0)
			{
				ft_rrb(tabB, 1);
			}
		}
		else
		{
			ft_rb(tabB, 1);
			index++;
		}
	}
	if (index == 0 && ft_end(tabB) != 0)
		ft_rrb(tabB,1);
}

void	ft_swap_for_a(t_list *tabA, int value)
{
	int	index;

	index = ft_index_a(tabA, value);
	////printf("%d index a\n",index);
	while (index != 0 && index != ft_end(tabA))
	{
		if (index < ft_end(tabA) - index)
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
			//////printf("%d et index %d\n",ft_end(tabA),index);
		}
	}
	if (index == 0)
		ft_rra(tabA,1);
}*/
