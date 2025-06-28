/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_low_indexes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:05:45 by jissa             #+#    #+#             */
/*   Updated: 2025/06/27 11:06:11 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int finding_max_index(Node **list)
{
	Node *curr = *list;
	int max = find_highest_number(list);
	int i = 0;
	while(curr != NULL)
	{
		if(curr->data == max)
			break;
		curr = curr->next;
		i++;
	}
	return i;
}

int finding_min_index(Node **list)
{
	Node *curr = *list;
	int min = finding_min_number(list);
	int i = 0;
	while (curr)
	{
		if(curr->data == min)
			break;
		curr = curr->next;
		i++;
	}
	return i;
}