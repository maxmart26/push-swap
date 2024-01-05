/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_first_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:36:38 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:09 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_for_5(t_list *taba, int min, int index)
{
	int	i;

	i = ft_end(taba);
	min = 0;
	while (index >= 0)
	{
		if (index == ft_end(taba))
			return ;
		if (index >= 2)
		{
			ft_ra(taba, 1);
			index++;
		}
		else if (index < 3)
		{
			ft_rra(taba, 1);
			index--;
		}
	}
}

void	ft_swap_all_2(t_list *taba, t_list *tabb, int min, int max)
{
	int	i;
	int	x;

	x = -5;
	i = ft_end(taba);
	while (i > x && i > 1 && ft_verif(taba) == 0)
	{
		i = ft_end(taba);
		if (taba[i].value != min && taba[i].value != max)
		{
			ft_swap_all_3(taba, tabb, i);
		}
		else
			ft_ra(taba, 1);
	}
}

int	ft_index_a_min(t_list *taba, int min)
{
	int	i;

	i = 0;
	while (i <= ft_end(taba))
	{
		if (taba[i].value == min)
			return (i);
		i++;
	}
	return (0);
}

void	ft_swap_all(t_list *taba, t_list *tabb)
{
	int	min;
	int	max;
	int	i;

	i = ft_end(taba);
	min = ft_int_min(taba);
	max = ft_int_max(taba);
	tabb[0].end = 2;
	if (i == 2)
		ft_swap_for_3(taba);
	else if (i == 4)
		ft_main_algo(taba, tabb, min, i);
	else
		ft_swap_all_2(taba, tabb, min, max);
}

int	ft_cout_b(t_list *tabb, int i)
{
	int	end;
	int	result;

	end = ft_end(tabb);
	if (i == 0)
		return (0);
	result = end - i;
	if (result > i + 1)
		result = i + 1;
	return (result);
}
