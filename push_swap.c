/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:37:39 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 17:34:02 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_Node *list)
{
	t_Node	*curr;

	curr = list;
	while (list != NULL)
	{
		curr = list->next;
		free(list);
		list = curr;
	}
}

int	count_args(char **args)
{
	int	args_count;

	args_count = 0;
	while (args[args_count])
	{
		args_count++;
	}
	return (args_count);
}

void	choose_sort_strategy(t_Node **list_a, t_Node **list_b)
{
	int	size;

	size = ft_lstsize(*list_a);
	if (size == 2)
		sort_two_nodes(list_a);
	else if (size == 3)
		sort_three_nodes(list_a);
	else if (size == 4)
		sort_four_nodes(list_a, list_b);
	else if (size == 5)
		sort_five_nodes(list_a, list_b);
	else
	{
		indexing_list(list_a, size);
		radix_sort(list_a, list_b);
	}
}

t_Node	*list_check(char **args, int args_count)
{
	t_Node	*list;

	if (is_digit(args) == 0 || check_dup(args) == 0 \
			|| handling_overflow(args) == 0)
	{
		ft_putstr_fd("Error\n", 1);
		return (NULL);
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
	t_Node	*list_a;
	t_Node	*list_b;
	t_Node	*curr_a;
	t_Node	*curr_b;

	list_a = NULL;
	list_b = NULL;
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
	curr_a = list_a;
	curr_b = list_b;
	choose_sort_strategy(&curr_a, &curr_b);
	free_list(curr_a);
}
