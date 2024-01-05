/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_first_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:39:20 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:09 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cout_a(t_list *taba, int i)
{
	int	end;
	int	result;

	end = ft_end(taba);
	result = end - i;
	if (result > i + 1)
		result = i + 1;
	return (result);
}

void	ft_write_cout(t_list *taba, t_list *tabb)
{
	int	i;

	i = 0;
	while (tabb[i].end != 1)
	{
		tabb[i].cout = ft_cout_b(tabb, i) + ft_cout_a(taba, ft_index_a(taba,
					tabb[i].value)) + 1;
		i++;
	}
}

void	ft_main_algo(t_list *taba, t_list *tabb, int min, int i)
{
	ft_swap_for_5(taba, min, ft_index_a_min(taba, min));
	tabb[0] = taba[i];
	tabb[0].end = 1;
	tabb[1].end = 2;
	taba[i - 1].end = 1;
	write(1, "pb\n", 3);
	min = ft_int_min(taba);
	ft_swap_for_5(taba, min, ft_index_a_min(taba, min));
	ft_pb(taba, tabb, 1);
	ft_swap_for_3(taba);
	ft_pa(taba, tabb, 1);
	ft_pa(taba, tabb, 1);
}
