/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:41:32 by jissa             #+#    #+#             */
/*   Updated: 2025/06/28 14:35:00 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct lin_list {
	struct lin_list *next;
	int				data;
	int 			index ;
} Node;

char			**ft_split(char const *s, char c);
long long		ft_atoi(char *nptr);
Node			*create_list(char **args, int args_count);
int				is_digit(char **strs);
int				check_dup(char **args);
int				handling_overflow(char **args);
int				ft_lstsize(Node *lst);
void			swap_a(Node **list_a);
void			swap_b(Node **list_b);
void			ss(Node **list_a, Node **list_b);
void			rotate_a(Node **list_a);
void			rotate_b(Node **list_b);
void			rr(Node **list_a, Node **list_b);
void			rra(Node **list_a);
void			rrb(Node **list_b);
void			rrr(Node **list_a, Node **list_b);
int				ft_strcmp(const char *s1, const char *s2);
int				a_is_sorted(Node **list);
void			sort_two_nodes(Node **list_a);
void			sort_three_nodes(Node **list);
void			sort_four_nodes(Node **list_a, Node **list_b);
void			sort_five_nodes(Node **list_a, Node **list_b);
int 			find_highest_number(Node **list);
int				finding_min_number(Node **list);
int 			finding_max_index(Node **list);
int 			finding_min_index(Node **list);
void 			push_a(Node **stack_a, Node **stack_b);
void 			push_b(Node **stack_a, Node **stack_b);
int				*assigning_list_arr(Node **list);
void			bubble_sort(int *arr, int size);
void			indexing_list(Node **list, int *arr, int size);
void			ft_putstr_fd(char *str, int fd);

#endif
