/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:36:15 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 16:56:16 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*create_list(char **args, int args_count)
{
	t_Node	*new_node;
	t_Node	*tail_node;
	int		i;

	tail_node = NULL;
	i = args_count - 1;
	while (i >= 0)
	{
		new_node = malloc(sizeof(t_Node));
		if (!new_node)
			return (NULL);
		new_node->data = ft_atoi(args[i]);
		new_node->next = tail_node;
		tail_node = new_node;
		i--;
	}
	return (tail_node);
}

int	a_is_sorted(t_Node **list)
{
	t_Node	*curr;

	curr = *list;
	while (curr && curr->next)
	{
		if (curr->data > curr->next->data)
			return (0);
		curr = curr->next;
	}
	return (1);
}
