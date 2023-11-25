/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:05:03 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/25 14:44:45 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*tabA;
	t_list	*tabB;

	tabA = malloc(ac * sizeof(t_list));
	if (!tabA)
		return (0);
	tabB = malloc(ac * sizeof(t_list));
	if (!tabB)
		return (0);
	if (ft_error(av) == 1)
	{
		ft_putstr_error("Error1\n");
		return (0);
	}
	tabA = ft_parse(tabA, av, ac - 1);
	if (ft_double(tabA) == 1 || ft_max_error(tabA) == 1)
	{
		ft_putstr_error("Error2\n");
		return (0);
	}
	ft_swap_main(tabA, tabB);
}

void	ft_swap_main(t_list *tabA, t_list *tabB)
{
	ft_swap_all(tabA, tabB);

	while (tabB[0].end != 1)
	{
		ft_write_cout(tabA, tabB);
		ft_swap_for_b(tabB);
		ft_swap_for_a(tabA, tabB[0].value);
		ft_swap(tabA, tabB);
	}
}
