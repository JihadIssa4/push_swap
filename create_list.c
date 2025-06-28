/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:36:15 by jissa             #+#    #+#             */
/*   Updated: 2025/06/26 10:57:08 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Node	*create_list(char **args, int args_count)
{
	Node *new_Node;
	Node *tail_Node = NULL;
	int i = args_count - 1;
	while (i >= 0)
	{
		new_Node = malloc(sizeof(Node));
		if (!new_Node)
			return (NULL);
		new_Node->data = ft_atoi(args[i]);
		new_Node->next = tail_Node;
		tail_Node = new_Node;
		i--;
	}
	return tail_Node;
}