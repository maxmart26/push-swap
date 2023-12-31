/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:46:48 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 14:26:44 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_end_index_a(t_list *taba, int value)
{
	int	j;

	j = ft_end(taba);
	while (j >= 0)
	{
		if (taba[j].value == value)
		{
			return (j);
		}
		j--;
	}
	return (j);
}

void	ft_main_end(t_list *taba)
{
	int	index;
	int	i;

	i = ft_int_max(taba);
	index = ft_end_index_a(taba, i);
	index--;
	if (ft_end(taba) - index <= index + 1)
		ft_up_a(taba, index);
	else
		ft_down_a(taba, index);
}

void	ft_free(t_list *taba, t_list *tabb)
{
	free (taba);
	free (tabb);
}
