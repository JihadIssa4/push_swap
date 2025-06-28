/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:37:39 by jissa             #+#    #+#             */
/*   Updated: 2025/06/28 15:13:06 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	count_args(char **args)
{
	int i = 0;
	while (args[i])
	{
		i++;
	}
	return i;
}

Node	*list_check(char **args, int args_count)
{
	Node *list;
	int i = 0;
	if(is_digit(args) == 0 || check_dup(args) == 0 || handling_overflow(args) == 0)
	{
		ft_putstr_fd("Error\n", 1);
		return(NULL);
	}
	else
		list = create_list(args, args_count);
	if (a_is_sorted(&list))
		return (NULL);
	return (list);
}

int	main(int argc, char **argv)
{
	char	**args;
	Node	*list_a = NULL;
	Node	*list_b = NULL;
	if (argc < 2 || argv[1][0] == '\0')
		return (1);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	if (argc > 2)
		args = &argv[1];
	argc = count_args(args);
	list_a = list_check(args, argc);
	if (!list_a)
		return (0);
	Node *curr = list_a;
	Node *curr_2 = list_a;
	Node *curr_3 = list_a;
	int *arr = assigning_list_arr(&curr_2);
	// for(int i = 0; i < ft_lstsize(curr); i++)
	// {
	// 	printf("%d ", arr[i]);
	// }
	indexing_list(&curr, arr, ft_lstsize(curr));
	while(curr_3)
	{
		printf("%d ", curr_3->index);
		curr_3 = curr_3->next;
	}
	printf("\n");
	printf("%d\n", 42>>1);
	free(list_a);
}