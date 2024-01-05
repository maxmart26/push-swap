/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:05:03 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 14:25:35 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calcul(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			j++;
		}
		i++;
	}
	return (i);
}

t_list	*ft_main_malloc(int ac)
{
	t_list	*taba;

	taba = malloc(ac * sizeof(t_list));
	if (!taba)
		return (0);
	return (taba);
}

void	ft_main_for_2(char ***str, t_list **taba, t_list **tabb, char ***av)
{
	*str = ft_split((*av)[1], 32);
	*taba = ft_main_malloc(ft_calcul(*str));
	*tabb = ft_main_malloc(ft_calcul(*str));
	*taba = ft_parse_2(*taba, *str, ft_calcul(*str));
	free_tab(*str, ft_calcul(*str));
}

int	main(int ac, char **av)
{
	t_list	*taba;
	t_list	*tabb;
	char	**str;

	if (ft_error(av) == 1 || ac < 2 || av[1][0] == '\0')
		ft_putstr_error("Error\n");
	if (ac == 2)
		ft_main_for_2(&str, &taba, &tabb, &av);
	else
	{
		taba = ft_main_malloc(ac);
		tabb = ft_main_malloc(ac);
		taba = ft_parse(taba, av, ac - 2);
	}
	if (ft_double(taba) == 1 || ft_max_error(taba) == 1)
	{
		ft_putstr_error("Error\n");
		ft_free(taba, tabb);
	}
	ft_swap_main(taba, tabb);
	ft_free(taba, tabb);
}

void	ft_swap_main(t_list *taba, t_list *tabb)
{
	ft_swap_all(taba, tabb);
	while (tabb[0].end != 2)
	{
		ft_write_cout(taba, tabb);
		ft_swap_for_b(tabb);
		ft_swap_for_a(taba, tabb[ft_end(tabb)].value);
		ft_pa(taba, tabb, 1);
	}
	ft_main_end(taba);
}
