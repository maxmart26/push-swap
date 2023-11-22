/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:01:11 by matorgue          #+#    #+#             */
/*   Updated: 2023/11/22 15:10:05 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	tabA[ac];
	t_list	tabB[ac];
}

long	ft_atoi(char *str)
{
	long	nbr;
	long	neg;
	long	i;

	nbr = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] < 14 && str[i] > 8)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = ((nbr * 10) + (str[i] + '0'));
		i++;
	}
	nbr = nbr * neg;
	return (nbr);
}

t_list	*ft_parse(t_list *tabA, char **av)
{
	int	i;

	i = 0;
	while (av[i + 1])
	{
		tabA->value = ft_atoi(av[i + 1]);
		i++;
	}
	return (tabA);
}

int	ft_double(t_list *tabA)
{
	int	i;
	int	j;

	i = 0;
	while (tabA[i])
	{
		j = i + 1;
		while (tabA[j])
		{
			if (tabA[i].value == tabA[j].value)
				reurn(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_int_max(t_list *tabA)
{
	int	i;

	i = 0;
	while (tabA[i])
	{
		if (tabA[i].value > 2147483647 || tabA[i].value < -2147483648)
			return (1);
		i++;
	}
	return (0);
}


int	ft_number(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] != '-' && av[i][j] != '+' && (av[i][j] < '0'
					|| av[i][j] > '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


void	ft_ss(t_list *tabA, t_list *tabB)
{
	ft_sa(tabA, 0);
	ft_sb(tabB, 0);

	ft_putstr("ss");
}

void	ft_sa(t_list *tabA,int i)
{
	t_list	temp;

	temp = tabA[0];
	tabA[0] = tabA[1];
	tabA[1] = temp;
	if (i != 0)
		ft_putstr("sa");
}

void	ft_sb(t_list *tabB, int i)
{
	t_list	temp;

	temp = tabB[0];
	tabB[0] = tabB[1];
	tabB[1] = temp;
	if (i != 0)
		ft_putstr("sb");
}
void	ft_pa(t_list *tabA, t_list *tabB)
{

}

