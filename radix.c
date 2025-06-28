/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:08:08 by jissa             #+#    #+#             */
/*   Updated: 2025/06/28 17:46:06 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*assigning_list_arr(Node **list)
{
	Node *curr = *list;
	int i = 0;
	int list_len = ft_lstsize(*list);
	int *arr = malloc(list_len * sizeof(int));
	if (!arr)
		return 0;
	while (curr)
	{
		arr[i] = curr->data;
		i++;
		curr = curr->next;
	}
	return arr;
}

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0 ;
	while (i < size - 1)
	{
		j = 0 ;
		while (j < size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void		indexing_list(Node **list, int *arr, int size)
{
	int i;
	Node *curr = *list;
	bubble_sort(arr, size);
	int len = ft_lstsize(curr);
	
	while (curr)
	{
		i = 0;
		while(i < len)
		{
			if (curr->data == arr[i])
			{
				curr->index = i;
			}
			i++;
		}
		curr = curr->next;
	}
}

int		getting_max_bits(Node **list)
{
	int max = 0;
	int bits = 0;
	Node *curr = *list;

	while(curr)
	{
		if (curr->index > max)
			max = curr->index;
		curr = curr->next;
	}
	while((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(Node **list)
{
	int bits = getting_max_bits(list);
	Node *curr = *list;
	int i = 0;
	while (curr)
	{
		while (i < bits)
		{
			if (curr->index >> i == 0)
				push_b(curr);
			
		}
	}
}
