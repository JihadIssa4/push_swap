/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_actions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:50:04 by jissa             #+#    #+#             */
/*   Updated: 2025/06/26 13:29:30 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(Node **list_a)
{
	Node *old_head = *list_a;
	Node *new_head = old_head->next;
	Node *tail = *list_a;

	if (!list_a || !*list_a || !(*list_a)->next)
		return ;
	while (tail->next)
		tail = tail->next;
	tail->next = old_head;
	old_head->next = NULL;
	*list_a = new_head;
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(Node **list_b)
{
	Node *old_head = *list_b;
	Node *new_head = old_head->next;
	Node *tail = *list_b;
	
	if (!list_b || !*list_b || !(*list_b)->next)
		return ;
	while (tail->next)
		tail = tail->next;
	tail->next = old_head;
	old_head->next = NULL;
	*list_b = new_head;
	ft_putstr_fd("rb\n", 1);
}

void	rr(Node **list_a, Node **list_b)
{
	rotate_a(list_a);
	rotate_b(list_b);
	ft_putstr_fd("rr\n", 1);
}