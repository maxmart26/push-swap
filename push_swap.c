/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:01:11 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 12:09:45 by matorgue         ###   ########.fr       */
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
	if (str[0] == '\0')
		return (300000000000000);
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

t_list	*ft_parse_2(t_list *taba, char **av, int nb)
{
	int	i;
	int	nbr;

	nbr = nb;
	i = 0;
	taba[nb - 1].end = 1;
	while (i < nbr)
	{
		taba[nb - 1].value = ft_atoi(av[i]);
		taba[nb - 1].end = 0;
		i++;
		nb--;
	}
	taba[nbr - 1].end = 1;
	return (taba);
}

t_list	*ft_parse(t_list *taba, char **av, int nb)
{
	int	i;
	int	nbr;

	nbr = nb;
	i = 0;
	while (i <= nbr)
	{
		taba[nb].value = ft_atoi(av[i + 1]);
		taba[nb].end = 0;
		i++;
		nb--;
	}
	taba[nbr].end = 1;
	return (taba);
}

int	ft_end(t_list *tab)
{
	int	count;

	count = 0;
	if (tab[0].end == 2)
		return (-1);
	while (tab[count].end != 1)
		count++;
	if (tab[count].end == 1)
		count++;
	return (count - 1);
}
