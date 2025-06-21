/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:37:39 by jissa             #+#    #+#             */
/*   Updated: 2025/06/21 18:38:28 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

typedef struct lin_list {
	struct lin_list *next;
	int				data;
} Node;

Node	*append_list(int num)
{
	Node *list = malloc(sizeof(Node));
	if (!list)
		return NULL;
	list->data = num;
	return list;
}

int main(int argc, char **argv)
{
	int i = 0;
	Node *Node_head = NULL;
	Node *new_Node = NULL;
	
	int number;
	if (argc < 2 || !argv[1][0])
		return (1);
	if (argc == 2)
	{
		char **res = ft_split(argv[1], ' ');
		number = ft_atoi(res[i]);
		Node_head = append_list(number);
		i += 1;
		while(res[i])
		{
			number = (ft_atoi(res[i]));
			new_Node = append_list(number);
			new = list->next;
			i++;
		}
	}
}