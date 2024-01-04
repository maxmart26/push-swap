/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:22:57 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/04 11:29:15 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_for_3(t_list *tabA)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (tabA[2].value > tabA[1].value && tabA[2].value > tabA[0].value)
		{
			ft_ra(tabA, 1);
			i++;
		}
		if (tabA[2].value > tabA[1].value)
			ft_sa(tabA, 1);
		else if (tabA[0].value != ft_int_max(tabA))
			ft_rra(tabA, 1);
		i++;
	}
}

int	ft_verif(t_list *tabA)
{
	int	i;

	i = ft_end(tabA);
	while (i > 0)
	{
		if (tabA[i].value > tabA[i - 1].value)
		{
			return (0);
		}
		i--;
	}
	return (1);
}

int	ft_int_min(t_list *tabA)
{
	int	i;
	int	min;

	i = 0;
	min = tabA[0].value;
	while (tabA[i].end != 1)
	{
		if (min > tabA[i].value)
			min = tabA[i].value;
		i++;
	}
	if (min > tabA[i].value)
		min = tabA[i].value;
	return (min);
}

int	ft_int_max(t_list *tabA)
{
	int	i;
	int	max;

	i = 0;
	max = tabA[0].value;
	while (tabA[i].end != 1)
	{
		if (max < tabA[i].value)
			max = tabA[i].value;
		i++;
	}
	if (max < tabA[i].value)
		max = tabA[i].value;
	return (max);
}

void	ft_swap_all_3(t_list *tabA, t_list *tabB, int i)
{
	if (tabB[0].end == 2)
	{
		tabB[0] = tabA[i];
		tabB[0].end = 1;
		tabB[1].end = 2;
		tabA[i - 1].end = 1;
		write(1, "pb\n", 3);
	}
	else
		ft_pb(tabA, tabB, 1);
}

void	ft_swap_all_2(t_list *tabA, t_list *tabB ,int min,int max,int x)
{
	int	i;

	i = ft_end(tabA);
	while (i > x && i > 1 && ft_verif(tabA) == 0)
	{
		i = ft_end(tabA);
		if (tabA[i].value != min && tabA[i].value != max)
		{
			if (tabA[i].value > tabA[0].value)
			{
				ft_ra(tabA, 1);
				x++;
			}
			else if (tabA[i].value < tabA[0].value)
				ft_swap_all_3(tabA, tabB, i);
		}
		else
			ft_ra(tabA, 1);
	}
}

void	ft_swap_all(t_list *tabA, t_list *tabB)
{
	int	min;
	int	max;
	int	i;
	int	x;

	i = ft_end(tabA);
	min = ft_int_min(tabA);
	max = ft_int_max(tabA);
	tabB[0].end = 2;
	x = -5;
	if (i == 2)
		ft_swap_for_3(tabA);
	else
	{
		ft_swap_all_2(tabA,tabB,min,max,x);
	}
}

int	ft_cout_B(t_list *tabB, int i)
{
	int	end;
	int	result;

	end = ft_end(tabB);
	if (i == 0)
		return (0);
	result = end - i;
	if (result > i + 1)
		result = i + 1;
	return (result);
}

int	ft_cout_A(t_list *tabA, int i)
{
	int	end;
	int	result;

	end = ft_end(tabA);
	result = end - i;
	if (result > i + 1)
		result = i + 1;
	return (result);
}

void	ft_write_cout(t_list *tabA, t_list *tabB)
{
	int	i;

	i = 0;
	while (tabB[i].end != 1)
	{
		tabB[i].cout = ft_cout_B(tabB, i) + ft_cout_A(tabA, ft_index_a(tabA,
					tabB[i].value)) + 1;
		i++;
	}
}
