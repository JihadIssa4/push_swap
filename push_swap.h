/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:41:32 by jissa             #+#    #+#             */
/*   Updated: 2025/06/24 17:10:17 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct lin_list {
	struct lin_list *next;
	int				data;
} Node;

char			**ft_split(char const *s, char c);
long long		ft_atoi(char *nptr);
Node	*append_list(char **args, int args_count);
int				is_digit(char **strs);
int				ft_strcmp(const char *s1, const char *s2);

#endif
