/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:37:39 by jissa             #+#    #+#             */
/*   Updated: 2025/06/24 17:25:03 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(char **args)
{
	int i = 0;
	int j;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if(ft_strcmp(args[i], args[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_list(Node *list)
{
	Node	*curr = list;
	while (list != NULL)
	{
		curr = list->next;
		free(list);
		list = curr;
	}
}

int	handling_overflow(char **args)
{
	int i = 0;
	long long num;
	while(args[i])
	{
		num = ft_atoi(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

Node	*append_list(char **args, int args_count)
{
	Node *new_Node;
	Node *tail_Node = NULL;
	int i = args_count - 2;
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
	return new_Node;
}

Node	*list_check(char **args, int args_count)
{
	Node *list;
	int i = 0;
	if(is_digit(args) == 0)
		printf("Error\n");
	else if(check_dup(args) == 0)
		printf("Error\n");
	else if(handling_overflow(args) == 0)
		printf("Error\n");
	else
		list = append_list(args, args_count);
	return (list);
}

int	main(int argc, char **argv)
{
	char	**args;
	Node	*list = NULL;
	if (argc < 2 || argv[1][0] == '\0')
		return (1);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	if (argc > 2)
		args = &argv[1];
	list = list_check(args, argc);
	Node *curr = list;
	while(curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	free_list(list);
}