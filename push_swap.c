/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:37:39 by jissa             #+#    #+#             */
/*   Updated: 2025/06/23 08:07:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

typedef struct lin_list {
	struct lin_list *next;
	int				data;
} Node;

int	ft_isdigit(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

Node	*append_list(int num)
{
	Node *list = malloc(sizeof(Node));
	if (!list)
		return NULL;
	list->data = num;
	return list;
}

char		*check_dup(Node **Node_list)
{
	Node *checker_outer = *Node_list;
	Node *checker_inner;
	while(checker_outer != NULL)
	{
		checker_inner = checker_outer->next;
		while(checker_inner != NULL)
		{
			if (checker_outer->data == checker_inner->data)
				return ("duplicates found");
			checker_inner = checker_inner->next;
		}
		checker_outer = checker_outer->next;
	}
	return ("no duplicates found");
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	Node *Node_head = NULL;
	Node *new_Node = NULL;
	
	int number;
	if (argc < 2 || !argv[1][0])
		return (1);
	if (argc == 2)
	{
		char **res = ft_split(argv[1], ' ');
		while(res[j])
		{
			printf("%d\n", ft_isdigit(res[j]));
			j++;
		}
		number = ft_atoi(res[i]);
		Node_head = append_list(number);
		new_Node = Node_head;
		i += 1;
		while(res[i])
		{
			number = (ft_atoi(res[i]));
			new_Node->next = append_list(number);
			new_Node = new_Node->next;
			i++;
		}
		printf("%s\n", check_dup(&Node_head));
		while(Node_head != NULL)
		{
			printf("%d\n", Node_head->data);
			Node_head = Node_head->next;
		}
	}
}