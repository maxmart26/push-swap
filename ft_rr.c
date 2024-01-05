/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:08:58 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:09:30 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list *taba, int k)
{
	t_list	temp;
	int		i;

	i = ft_end(taba);
	temp = taba[i];
	taba[i - 1].end = 1;
	while (i != 0)
	{
		taba[i] = taba[i - 1];
		i--;
	}
	taba[0] = temp;
	taba[0].end = 0;
	if (k != 0)
		ft_putstr("ra\n");
}

void	ft_rb(t_list *tabb, int k)
{
	t_list	temp;
	int		i;

	i = ft_end(tabb);
	temp = tabb[i];
	tabb[i - 1].end = 1;
	while (i != 0)
	{
		tabb[i] = tabb[i - 1];
		i--;
	}
	tabb[0] = temp;
	tabb[0].end = 0;
	if (k != 0)
		ft_putstr("rb\n");
}

void	ft_rr(t_list *taba, t_list *tabb)
{
	ft_rrb(tabb, 0);
	ft_rra(taba, 0);
	ft_putstr("rr\n");
}
