/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:27:49 by jissa             #+#    #+#             */
/*   Updated: 2025/06/25 11:29:20 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_digit(char **args)
{
	int i = 0;
	int j;
	while(args[i])
	{
		j = 0;
		if (args[i][j] == '+' || args[i][j] == '-')
			j++;
		if (args[i][j] == '\0')
			return (0);
		while (args[i][j])
		{
			if (args[i][j] < '0' || args[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

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