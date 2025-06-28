/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:38:06 by jissa             #+#    #+#             */
/*   Updated: 2025/06/26 15:34:43 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
void	swap_a(Node **list_a)
{
	Node *first = *list_a;
	if (*list_a == NULL)
		return ;
	Node *second = (*list_a)->next;
	int	Node_len = ft_lstsize(first);
	if (Node_len < 2)
		return ;
	first->next = second->next;
	second->next = first;
	*list_a = second;
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(Node **list_b)
{
	Node *first = *list_b;
	if (*list_b == NULL)
		return ;
	Node *second = (*list_b)->next;
	int	Node_len = ft_lstsize(first);
	if (Node_len < 2)
		return ;
	first->next = second->next;
	second->next = first;
	*list_b = second;
	ft_putstr_fd("sb\n", 1);
}

void	ss(Node **list_a, Node **list_b)
{
	swap_a(list_a);
	swap_b(list_b);
	ft_putstr_fd("ss\n", 1);
}
