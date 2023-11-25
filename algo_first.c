/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:22:57 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/25 14:42:20 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_int_min(t_list *tabA)
{
	int	i;
	int	min;

	i = 0;
	min = tabA[0].value;
	while (tabA[i].end != 1)
	{
		if (min > tabA[i].value)
			min = tabA[0].value;
		i++;
	}
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
			max = tabA[0].value;
		i++;
	}
	return (max);
}

void	ft_swap_all(t_list *tabA, t_list *tabB)
{
	int	min;
	int	max;
	int	i;

	i = ft_end(tabA);
	min = ft_int_min(tabA);
	max = ft_int_max(tabA);
	while (i > 0)
	{
		if (tabA[i].value != min && tabA[i].value != max)
		{
			if (tabB[0].end == 2)
			{
				tabB[0] = tabA[i];
				tabB[0].end = 1;
				tabA[i - 1].end = 1;
			}
			else
				ft_pb(tabA, tabB, 1);
		}
		i--;
	}
}
int	ft_cout_B(t_list *tabB, int i)
{
	int	end;
	int	result;

	end = ft_end(tabB);
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


