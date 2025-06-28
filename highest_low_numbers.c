/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:04:37 by jissa             #+#    #+#             */
/*   Updated: 2025/06/27 11:05:17 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_highest_number(Node **list)
{
	Node	*curr = *list;
	int		max = curr->data;
	while (curr != NULL)
	{
		if(curr->data > max)
			max = curr->data;
		curr = curr->next;
	}
	return max;
}

int	finding_min_number(Node **list)
{
	Node *curr = *list;
	int min = curr->data;
	while (curr != NULL)
	{
		if(curr->data < min)
			min = curr->data;
		curr = curr->next;
	}
	return (min);
}
