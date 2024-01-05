/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:05:40 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:07:28 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list *taba, t_list *tabb)
{
	ft_sa(taba, 0);
	ft_sb(tabb, 0);
	ft_putstr("ss\n");
}

void	ft_sa(t_list *taba, int j)
{
	int		i;
	t_list	temp;

	i = ft_end(taba);
	taba[i].end = 0;
	taba[i - 1].end = 1;
	temp = taba[i];
	taba[i] = taba[i - 1];
	taba[i - 1] = temp;
	if (j != 0)
		ft_putstr("sa\n");
}

void	ft_sb(t_list *tabb, int j)
{
	int		i;
	t_list	temp;

	i = ft_end(tabb);
	tabb[i].end = 0;
	tabb[i - 1].end = 1;
	temp = tabb[i];
	tabb[i] = tabb[i - 1];
	tabb[i - 1] = temp;
	if (j != 0)
		ft_putstr("sb\n");
}
