/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate_actions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:30:05 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 17:12:39 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_Node **list_a)
{
	t_Node	*oldhead;
	t_Node	*tail;
	t_Node	*old_tail;

	oldhead = *list_a;
	tail = *list_a;
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

void	rrb(t_Node **list_b)
{
	t_Node	*oldhead;
	t_Node	*tail;
	t_Node	*old_tail;

	oldhead = *list_b;
	tail = *list_b;
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

void	rrr(t_Node **list_a, t_Node **list_b)
{
	rra(list_a);
	rrb(list_b);
	ft_putstr_fd("rrr\n", 1);
}
