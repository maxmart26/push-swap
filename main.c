/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:05:03 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/26 16:46:19 by matorgue         ###   ########.fr       */
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
	tabA = ft_parse(tabA, av, ac - 2);
	if (ft_double(tabA) == 1 || ft_max_error(tabA) == 1)
	{
		ft_putstr_error("Error2\n");
		return (0);
	}
	ft_swap_main(tabA, tabB);
	/*free (tabA);
	free (tabB);*/
}

void	ft_swap_main(t_list *tabA, t_list *tabB)
{
	int	i;

	i = 0;
	ft_swap_all(tabA, tabB);
	//printf("fin de all\n");
	/*while (tabB[i].end != 2)
	{
		//printf("%d avec %ld\n", i, tabB[i].value);
		i++;
	}*/
	i = 0;
	while (tabB[0].end != 2)
	{
		ft_write_cout(tabA, tabB);
		ft_swap_for_b(tabB);
		//printf("%d avec %d\n", i, tabB[i].cout);
		ft_swap_for_a(tabA, tabB[0].value);
		//printf("%d avec %d\n", i, tabB[i].cout);
		ft_pa(tabA, tabB, 1);
	}
	ft_main_end(tabA);
	i = ft_end(tabA);
	while (i >= 0)
		{
			printf("%d avec %ld\n", i, tabA[i].value);
			i--;
		}
	// //printf("%d avec %ld\n",i,tabB[i].value);
}
