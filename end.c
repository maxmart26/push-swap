/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:46:48 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/28 13:48:53 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_end_index_a(t_list *tabA,int value)
{
	int	j;

	j = ft_end(tabA);
	while (j >= 0)
	{
		if (tabA[j].value == value)
		{
			return (j);
		}
		j--;
	}
	return (j);
}

void	ft_main_end(t_list *tabA)
{
	int	index;
	int i;

	i = ft_int_max(tabA);
		//printf("%d\n",i);
	index = ft_end_index_a(tabA, i);
	//index--;
	//printf("%d\n",index);
	if (ft_end(tabA) - index <= index + 1)
		ft_up_a(tabA, index);
	else
		ft_down_a(tabA, index);
}

