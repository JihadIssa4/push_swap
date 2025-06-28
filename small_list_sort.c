/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_list_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:09:18 by jissa             #+#    #+#             */
/*   Updated: 2025/06/27 11:06:26 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(Node **list)
{
	Node *curr = *list;
	while (curr && curr->next)
	{
		if (curr->data > curr->next->data)
			return (0);
		curr = curr->next;
	}
	return (1);
}

void	sort_two_nodes(Node **list)
{
	Node *curr = *list;
	if (!list || !*list || !(*list)->next)
		return ;
	if (curr->data > curr->next->data)
		swap_a(list);
}

void	sort_three_nodes(Node **list)
{
	Node *curr_2 = *list;
	int i = finding_max_index(list);
	if (i == 2)
	{
		if(curr_2->data < curr_2->next->data)
			return ;
		else
			swap_a(list);
	}
	else if(i == 1)
	{
		if(curr_2->data > curr_2->next->next->data)
			rra(list);
		else
		{
			rra(list);
			swap_a(list);
		}
	}
	else if (i == 0)
	{
		if (curr_2->next->data > curr_2->next->next->data)
		{
			rotate_a(list);
			swap_a(list);
		}
		else
			rotate_a(list);
	}
}

void	sort_four_nodes(Node **list_a, Node **list_b)
{
	int i = finding_min_index(list_a);
	printf("%d\n", i);
	while (i--)
		rotate_a(list_a);
	push_b(list_a, list_b);
	sort_three_nodes(list_a);
	push_a(list_a, list_b);
}

void	sort_five_nodes(Node **list_a, Node **list_b)
{
	int i = finding_min_index(list_a);
	while (i--)
		rotate_a(list_a);
	push_b(list_a, list_b);
	sort_four_nodes(list_a, list_b);
	push_a(list_a, list_b);
}