/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate_actions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:30:05 by jissa             #+#    #+#             */
/*   Updated: 2025/06/26 14:54:01 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(Node **list_a)
{
	Node *oldhead = *list_a;
	Node *tail = *list_a;
	Node *old_tail;
	
	if (!list_a || !*list_a || !(*list_a)->next)
		return ;
	while (tail->next)
	{
		old_tail = tail;
		tail = tail->next;
	}
	old_tail->next = NULL;
	tail->next = oldhead;
	*list_a = tail;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(Node **list_b)
{
	Node *oldhead = *list_b;
	Node *tail = *list_b;
	Node *old_tail;
	
	if (!list_b || !*list_b || !(*list_b)->next)
		return ;
	while (tail->next)
	{
		old_tail = tail;
		tail = tail->next;
	}
	old_tail->next = NULL;
	tail->next = oldhead;
	*list_b = tail;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(Node **list_a, Node **list_b)
{
	rra(list_a);
	rrb(list_b);
	ft_putstr_fd("rrr\n", 1);
}