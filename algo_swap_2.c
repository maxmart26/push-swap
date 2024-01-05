/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_swap_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:49:13 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:09 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_for_b(t_list *tabb)
{
	int	index;

	index = ft_index_b(tabb);
	if (ft_end(tabb) - index <= index + 1)
		ft_up_b(tabb, index);
	else
		ft_down_b(tabb, index);
}

void	ft_swap_for_a(t_list *taba, int value)
{
	int	index;

	index = ft_index_a(taba, value);
	if (ft_end(taba) - index <= index + 1 || index == ft_end(taba))
		ft_up_a(taba, index);
	else
		ft_down_a(taba, index);
}

int	ft_index_a(t_list *taba, int value)
{
	int	j;

	j = 0;
	if (taba[ft_end(taba)].value > value && taba[0].value < value)
		return (ft_end(taba));
	while (j + 1 <= ft_end(taba))
	{
		if (taba[j].value > value && taba[j + 1].value < value)
			return (j);
		j++;
	}
	return (-1);
}
