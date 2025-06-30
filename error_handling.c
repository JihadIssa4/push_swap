/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:27:49 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 17:30:36 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
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
	int	i;
	int	j;
	int	num_i;
	int	num_j;

	i = 0;
	while (args[i])
	{
		num_i = ft_atoi(args[i]);
		j = i + 1;
		while (args[j])
		{
			num_j = ft_atoi(args[j]);
			if (num_i == num_j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	handling_overflow(char **args)
{
	int			i;
	long long	num;

	i = 0;
	while (args[i])
	{
		num = ft_atoi(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}
