/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:38:06 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 16:48:27 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_Node **list_a)
{
	t_Node	*first;
	t_Node	*second;
	int		node_len;

	first = *list_a;
	if (*list_a == NULL)
		return ;
	second = (*list_a)->next;
	node_len = ft_lstsize(first);
	if (node_len < 2)
		return ;
	first->next = second->next;
	second->next = first;
	*list_a = second;
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_Node **list_b)
{
	t_Node	*first;
	t_Node	*second;
	int		node_len;

	first = *list_b;
	if (*list_b == NULL)
		return ;
	second = (*list_b)->next;
	node_len = ft_lstsize(first);
	if (node_len < 2)
		return ;
	first->next = second->next;
	second->next = first;
	*list_b = second;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_Node **list_a, t_Node **list_b)
{
	swap_a(list_a);
	swap_b(list_b);
	ft_putstr_fd("ss\n", 1);
}
