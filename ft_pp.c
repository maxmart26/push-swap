/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:07:43 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:08:02 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list *taba, t_list *tabb, int k)
{
	int	i;
	int	j;

	i = ft_end(taba);
	j = ft_end(tabb);
	if (j > 0)
		tabb[j - 1].end = 1;
	taba[i + 1] = tabb[j];
	tabb[j].end = 2;
	taba[i].end = 0;
	if (k != 0)
		ft_putstr("pa\n");
}

void	ft_pb(t_list *taba, t_list *tabb, int k)
{
	int	i;
	int	j;

	j = ft_end(taba);
	i = ft_end(tabb);
	if (j > 0)
		taba[j - 1].end = 1;
	tabb[i + 1] = taba[j];
	tabb[i].end = 0;
	tabb[i + 2].end = 2;
	if (k != 0)
		ft_putstr("pb\n");
}
