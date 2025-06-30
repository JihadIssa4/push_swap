/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:37:03 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 16:38:28 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*assigning_list_arr(t_Node **list)
{
	t_Node	*curr;
	int		i;
	int		list_len;
	int		*arr;

	curr = *list;
	i = 0;
	list_len = ft_lstsize(*list);
	arr = malloc(list_len * sizeof(int));
	if (!arr)
		return (0);
	while (curr)
	{
		arr[i] = curr->data;
		i++;
		curr = curr->next;
	}
	return (arr);
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

void	indexing_list(t_Node **list, int size)
{
	int		i;
	int		*arr;
	t_Node	*curr;
	int		len;

	arr = assigning_list_arr(list);
	bubble_sort(arr, size);
	curr = *list;
	len = ft_lstsize(curr);
	while (curr)
	{
		i = 0;
		while (i < len)
		{
			if (curr->data == arr[i])
			{
				curr->index = i;
			}
			i++;
		}
		curr = curr->next;
	}
	free(arr);
}
