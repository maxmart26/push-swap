/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:05:03 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/04 11:13:40 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calcul(char **str)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		j = 0;
		while(str[i][j])
		{
			printf("%c\n",str[i][j]);
			j++;
		}
		i++;
	}
	printf("%d\n",i);
	return (i);
}

t_list	*ft_main_malloc(int ac)
{
	t_list	*tabA;

	tabA = malloc(ac * sizeof(t_list));
	if (!tabA)
		return (0);
	return (tabA);
}

int	main(int ac, char **av)
{
	t_list	*tabA;
	t_list	*tabB;
	char	**str;

	if (ac == 2)
	{
		str = ft_split(av[1], 32);
		tabA = ft_main_malloc(ft_calcul(str));
		tabB = ft_main_malloc(ft_calcul(str));
	}
	else
	{
		tabA = ft_main_malloc(ac);
		tabB = ft_main_malloc(ac);
	}
	if (ft_error(av) == 1)
	{
		ft_putstr_error("Error1\n");
		return (0);
	}
	if (ac == 2)
	{
		tabA = ft_parse_2(tabA, str, ft_calcul(str));
		free_tab(str,ft_calcul(str));
	}
	else
	{
		tabA = ft_parse(tabA, av, ac - 2);
	}
	if (ft_double(tabA) == 1 || ft_max_error(tabA) == 1)
	{
		ft_putstr_error("Error2\n");
		free (tabA);
		free (tabB);
		return (0);
	}
	ft_swap_main(tabA, tabB);
	free (tabA);
	free (tabB);
}

void	ft_swap_main(t_list *tabA, t_list *tabB)
{
	ft_swap_all(tabA, tabB);
	while (tabB[0].end != 2)
	{
		ft_write_cout(tabA, tabB);
		ft_swap_for_b(tabB);
		ft_swap_for_a(tabA, tabB[ft_end(tabB)].value);
		ft_pa(tabA, tabB, 1);
	}
	ft_main_end(tabA);
		// 	int	nb = ft_end(tabA);

		// while(nb >= 0)
		// {
		// 	printf("valeur %ld et le end %d\n",tabA[nb].value,tabA[nb].end);
		// 	nb--;
		// }
}
