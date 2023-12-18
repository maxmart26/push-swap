/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:53:08 by matorgue          #+#    #+#             */
/*   Updated: 2023/12/18 19:00:58 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	long	value;
	int		end;
	int		cout;
}			t_list;

void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_split(char const *s, char c);
int			ft_error(char **av);
int			ft_double(t_list *tabA);
int			ft_max_error(t_list *tabA);
int			ft_number(char **av);
size_t		ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_putstr_error(char *str);
long		ft_atoi(char *str);
int			ft_end(t_list *tab);
void		ft_ss(t_list *tabA, t_list *tabB);
void		ft_sa(t_list *tabA, int j);
t_list		*ft_parse(t_list *tabA, char **av, int nb);
void	free_tab(char **tab, int row);
t_list	*ft_parse_2(t_list *tabA, char **av, int nb);
void		ft_sb(t_list *tabB, int j);
void		ft_pa(t_list *tabA, t_list *tabB, int k);
void		ft_pb(t_list *tabA, t_list *tabB, int k);
void		ft_ra(t_list *tabA, int k);
void		ft_rb(t_list *tabB, int k);
void		ft_rr(t_list *tabA, t_list *tabB);
void		ft_rra(t_list *tabA, int k);
void		ft_rrb(t_list *tabB, int k);
void		ft_rrr(t_list *tabA, t_list *tabB);
void		ft_swap_main(t_list *tabA, t_list *tabB);
int			main(int ac, char **av);
void		ft_write_cout(t_list *tabA, t_list *tabB);
int			ft_cout_A(t_list *tabA, int i);
int			ft_cout_B(t_list *tabB, int i);
void		ft_swap_all(t_list *tabA, t_list *tabB);
int			ft_int_max(t_list *tabA);
int			ft_int_min(t_list *tabA);
int			ft_index_for_swap(t_list *tabB);
int			ft_index_a(t_list *tabA, int value);
void		ft_swap(t_list *tabA, t_list *tabB);
void		ft_swap_for_b(t_list *tabB);
void		ft_swap_for_a(t_list *tabA, int value);
void	ft_main_end(t_list *tabA);
void	ft_down_b(t_list *tabB, int index);
void	ft_up_b(t_list *tabB, int index);
void	ft_up_a(t_list *tabA, int index);
void	ft_down_a(t_list *tabA, int index);






#endif
