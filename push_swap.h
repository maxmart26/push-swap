/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:53:08 by matorgue          #+#    #+#             */
/*   Updated: 2024/01/05 14:28:37 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long	value;
	int		end;
	int		cout;
}			t_list;

void		ft_bzero(void *s, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
void		*ft_calloc(size_t nmemb, size_t size);
char		**ft_split(char const *s, char c);
int			ft_error(char **av);
int			ft_double(t_list *taba);
int			ft_max_error(t_list *taba);
int			ft_number(char **av);
size_t		ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_putstr_error(char *str);
long		ft_atoi(char *str);
int			ft_end(t_list *tab);
void		ft_ss(t_list *taba, t_list *tabb);
void		ft_sa(t_list *taba, int j);
t_list		*ft_parse(t_list *taba, char **av, int nb);
void		free_tab(char **tab, int row);
t_list		*ft_parse_2(t_list *taba, char **av, int nb);
void		ft_sb(t_list *tabb, int j);
void		ft_pa(t_list *taba, t_list *tabb, int k);
void		ft_pb(t_list *taba, t_list *tabb, int k);
void		ft_ra(t_list *taba, int k);
void		ft_rb(t_list *tabb, int k);
void		ft_rr(t_list *taba, t_list *tabb);
void		ft_rra(t_list *taba, int k);
void		ft_rrb(t_list *tabb, int k);
void		ft_rrr(t_list *taba, t_list *tabb);
void		ft_main_algo(t_list *taba, t_list *tabb, int min, int i);
int			ft_cout_b(t_list *tabb, int i);
int			ft_cout_a(t_list *taba, int i);
void		ft_write_cout(t_list *taba, t_list *tabb);
void		ft_swap_all(t_list *taba, t_list *tabb);
int			ft_index_a_min(t_list *taba, int min);
void		ft_swap_for_3(t_list *taba);
int			ft_index_b(t_list *tabb);
void		ft_free(t_list *taba, t_list *tabb);
int			ft_verif(t_list *taba);
void		ft_swap_all_3(t_list *taba, t_list *tabb, int i);
void		ft_swap_all_2(t_list *taba, t_list *tabb, int min, int max);
void		ft_swap_for_5(t_list *taba, int min, int index);
void		ft_swap_main(t_list *taba, t_list *tabb);
int			main(int ac, char **av);
void		ft_write_cout(t_list *taba, t_list *tabb);
int			ft_cout_a(t_list *taba, int i);
int			ft_cout_b(t_list *tabb, int i);
void		ft_swap_all(t_list *taba, t_list *tabb);
int			ft_int_max(t_list *taba);
int			ft_int_min(t_list *taba);
int			ft_index_for_swap(t_list *tabb);
int			ft_index_a(t_list *taba, int value);
void		ft_swap(t_list *taba, t_list *tabb);
void		ft_swap_for_b(t_list *tabb);
void		ft_swap_for_a(t_list *taba, int value);
void		ft_main_end(t_list *taba);
void		ft_down_b(t_list *tabb, int index);
void		ft_up_b(t_list *tabb, int index);
void		ft_up_a(t_list *taba, int index);
void		ft_down_a(t_list *taba, int index);

#endif
