/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:08:08 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 17:33:40 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getting_max_bits(t_Node **list)
{
	int		max;
	int		bits;
	t_Node	*curr;

	max = 0;
	bits = 0;
	curr = *list;
	while (curr)
	{
		if (curr->index > max)
			max = curr->index;
		curr = curr->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_Node **list_a, t_Node **list_b)
{
	int	bits;
	int	size;
	int	i;
	int	j;

	bits = getting_max_bits(list_a);
	size = ft_lstsize(*list_a);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*list_a)->index >> i) & 1)
				rotate_a(list_a);
			else
				push_b(list_a, list_b);
			j++;
		}
		while (*list_b)
			push_a(list_a, list_b);
		i++;
	}
}
