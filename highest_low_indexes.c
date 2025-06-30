/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_low_indexes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:05:45 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 16:29:47 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	finding_max_index(t_Node **list)
{
	t_Node	*curr;
	int		max;
	int		i;

	curr = *list;
	max = find_highest_number(list);
	i = 0;
	while (curr != NULL)
	{
		if (curr->data == max)
			break ;
		curr = curr->next;
		i++;
	}
	return (i);
}

int	finding_min_index(t_Node **list)
{
	t_Node	*curr;
	int		min;
	int		i;

	curr = *list;
	min = finding_min_number(list);
	i = 0;
	while (curr)
	{
		if (curr->data == min)
			break ;
		curr = curr->next;
		i++;
	}
	return (i);
}
