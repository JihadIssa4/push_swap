/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_list_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:09:18 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 17:01:29 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_nodes(t_Node **list)
{
	t_Node	*curr;

	curr = *list;
	if (!list || !*list || !(*list)->next)
		return ;
	if (curr->data > curr->next->data)
		swap_a(list);
}

void	case_i_one(t_Node **list, t_Node *curr)
{
	if (curr->data > curr->next->next->data)
		rra(list);
	else
	{
		rra(list);
		swap_a(list);
	}
}

void	sort_three_nodes(t_Node **list)
{
	t_Node	*curr_2;
	int		i;

	curr_2 = *list;
	i = finding_max_index(list);
	if (i == 2 && (curr_2->data > curr_2->next->data))
		swap_a(list);
	else if (i == 1)
		case_i_one(list, curr_2);
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

void	sort_four_nodes(t_Node **list_a, t_Node **list_b)
{
	int	i;

	i = finding_min_index(list_a);
	while (i--)
		rotate_a(list_a);
	push_b(list_a, list_b);
	sort_three_nodes(list_a);
	push_a(list_a, list_b);
}

void	sort_five_nodes(t_Node **list_a, t_Node **list_b)
{
	int	i;

	i = finding_min_index(list_a);
	while (i--)
		rotate_a(list_a);
	push_b(list_a, list_b);
	sort_four_nodes(list_a, list_b);
	push_a(list_a, list_b);
}
