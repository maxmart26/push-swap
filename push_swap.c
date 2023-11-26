/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:01:11 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/26 17:10:41 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



long	ft_atoi(char *str)
{
	long	nbr;
	long	neg;
	long	i;

	nbr = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = ((nbr * 10) + (str[i] - 48));
		i++;
	}
	nbr = nbr * neg;
	return (nbr);
}

t_list	*ft_parse(t_list *tabA, char **av, int nb)
{
	int	i;
	int	nbr;

	nbr = nb;
	i = 0;
	tabA[nb].end = 1;
	while (i <= nbr)
	{
		tabA[nb].value = ft_atoi(av[i + 1]);
		//////printf("%ld avec la local : %d le end %d\n",tabA[nb].value,nb,tabA[nb].end);
		i++;
		nb--;
	}
	return (tabA);
}
int	ft_end(t_list *tab)
{
	int	i;

	i = 0;
	while (tab[i].end != 1)
	{
		if (tab[i].end == 1)
			return (i);
		i++;
	}
	return (i);
}

void	ft_ss(t_list *tabA, t_list *tabB)
{
	ft_sa(tabA, 0);
	ft_sb(tabB, 0);
	ft_putstr("ss\n");
}

void	ft_sa(t_list *tabA, int j)
{
	int		i;
	t_list	temp;

	i = ft_end(tabA);
	tabA[i].end = 0;
	tabA[i - 1].end = 1;
	temp = tabA[i];
	tabA[i] = tabA[i - 1];
	tabA[i - 1] = temp;
	if (j != 0)
		ft_putstr("sa\n");
}

void	ft_sb(t_list *tabB, int j)
{
	int		i;
	t_list	temp;

	i = ft_end(tabB);
	tabB[i].end = 0;
	tabB[i - 1].end = 1;
	temp = tabB[i];
	tabB[i] = tabB[i - 1];
	tabB[i - 1] = temp;
	if (j != 0)
		ft_putstr("sb\n");
}

void	ft_pa(t_list *tabA, t_list *tabB, int k)
{
	int	i;
	int	j;

	i = ft_end(tabA);
	j = ft_end(tabB);
	if (j > 0)
		tabB[j - 1].end = 1;
	tabA[i + 1] = tabB[j];
	tabB[j].end = 2;
	tabA[i].end = 0;
	if (k != 0)
		ft_putstr("pa\n");
}

void	ft_pb(t_list *tabA, t_list *tabB, int k)
{
	int	i;
	int	j;

	j = ft_end(tabA);
	i = ft_end(tabB);
	if (j > 0)
		tabA[j - 1].end = 1;
	tabB[i + 1] = tabA[j];
	tabB[i].end = 0;
	tabB[i + 2].end = 2;
	if (k != 0)
		ft_putstr("pb\n");
}

void	ft_rra(t_list *tabA, int k)
{
	int tempo;
    int i;
	int index_max;

	index_max = ft_end(tabA);
    i = 0;
    tempo = tabA[0].value;
    while (i + 1 <= index_max)
    {
        tabA[i].value = tabA[i + 1].value;
        i++;
    }
    tabA[index_max].value = tempo;
	if (k != 0)
		ft_putstr("rra\n");
}

void	ft_rrb(t_list *tabB, int k)
{
    int tempo;
    int i;
	int index_max;

	index_max = ft_end(tabB);
    i = 0;
    tempo = tabB[0].value;
    while (i + 1 <= index_max)
    {
        tabB[i].value = tabB[i + 1].value;
        i++;
    }
    tabB[index_max].value = tempo;
	if (k != 0)
		ft_putstr("rrb\n");
}


void	ft_rrr(t_list *tabA, t_list *tabB)
{
	ft_rrb(tabB, 0);
	ft_rra(tabA, 0);
	ft_putstr("rrr\n");
}

void	ft_ra(t_list *tabA, int k)
{
	t_list	temp;
	int		i;

	i = ft_end(tabA);
	temp = tabA[i];
	tabA[i - 1].end = 1;
	while (i != 0)
	{
		tabA[i] = tabA[i - 1];
		i--;
	}
	tabA[0] = temp;
	tabA[0].end = 0;
	if (k != 0)
		ft_putstr("ra\n");
}

void	ft_rb(t_list *tabB, int k)
{
	t_list	temp;
	int		i;

	i = ft_end(tabB);
	temp = tabB[i];
	tabB[i - 1].end = 1;
	while (i != 0)
	{
		tabB[i] = tabB[i - 1];
		i--;
	}
	tabB[0] = temp;
	tabB[0].end = 0;
	if (k != 0)
		ft_putstr("rb\n");
}

void	ft_rr(t_list *tabA, t_list *tabB)
{
	ft_rrb(tabB, 0);
	ft_rra(tabA, 0);
	ft_putstr("rr\n");
}
