/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:41:32 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 16:29:16 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct t_list {
	struct t_list	*next;
	int				data;
	int				index;
}	t_Node;

char			**ft_split(char const *s, char c);
long long		ft_atoi(char *nptr);
t_Node			*create_list(char **args, int args_count);
int				is_digit(char **strs);
int				check_dup(char **args);
int				handling_overflow(char **args);
int				ft_lstsize(t_Node *lst);
void			swap_a(t_Node **list_a);
void			swap_b(t_Node **list_b);
void			ss(t_Node **list_a, t_Node **list_b);
void			rotate_a(t_Node **list_a);
void			rotate_b(t_Node **list_b);
void			rr(t_Node **list_a, t_Node **list_b);
void			rra(t_Node **list_a);
void			rrb(t_Node **list_b);
void			rrr(t_Node **list_a, t_Node **list_b);
int				ft_strcmp(const char *s1, const char *s2);
int				a_is_sorted(t_Node **list);
void			sort_two_nodes(t_Node **list_a);
void			sort_three_nodes(t_Node **list);
void			sort_four_nodes(t_Node **list_a, t_Node **list_b);
void			sort_five_nodes(t_Node **list_a, t_Node **list_b);
int				find_highest_number(t_Node **list);
int				finding_min_number(t_Node **list);
int				finding_max_index(t_Node **list);
int				finding_min_index(t_Node **list);
void			push_a(t_Node **stack_a, t_Node **stack_b);
void			push_b(t_Node **stack_a, t_Node **stack_b);
int				*assigning_list_arr(t_Node **list);
void			bubble_sort(int *arr, int size);
void			indexing_list(t_Node **list, int size);
int				getting_max_bits(t_Node **list);
void			radix_sort(t_Node **list_a, t_Node **list_b);
void			ft_putstr_fd(char *str, int fd);

#endif
