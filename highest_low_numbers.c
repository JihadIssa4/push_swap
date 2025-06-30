/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_low_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:04:37 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 16:29:35 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_highest_number(t_Node **list)
{
	t_Node	*curr;
	int		max;

	curr = *list;
	max = curr->data;
	while (curr != NULL)
	{
		if (curr->data > max)
			max = curr->data;
		curr = curr->next;
	}
	return (max);
}

int	finding_min_number(t_Node **list)
{
	t_Node	*curr;
	int		min;

	curr = *list;
	min = curr->data;
	while (curr != NULL)
	{
		if (curr->data < min)
			min = curr->data;
		curr = curr->next;
	}
	return (min);
}
