/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:08:10 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:08:38 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list *taba, int k)
{
	int	tempo;
	int	i;
	int	index_max;

	index_max = ft_end(taba);
	i = 0;
	tempo = taba[0].value;
	while (i + 1 <= index_max)
	{
		taba[i].value = taba[i + 1].value;
		i++;
	}
	taba[index_max].value = tempo;
	if (k != 0)
		ft_putstr("rra\n");
}

void	ft_rrb(t_list *tabb, int k)
{
	int	tempo;
	int	i;
	int	index_max;

	index_max = ft_end(tabb);
	i = 0;
	tempo = tabb[0].value;
	while (i + 1 <= index_max)
	{
		tabb[i].value = tabb[i + 1].value;
		i++;
	}
	tabb[index_max].value = tempo;
	if (k != 0)
		ft_putstr("rrb\n");
}

void	ft_rrr(t_list *taba, t_list *tabb)
{
	ft_rrb(tabb, 0);
	ft_rra(taba, 0);
	ft_putstr("rrr\n");
}
