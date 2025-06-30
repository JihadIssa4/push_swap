/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:09:27 by jissa             #+#    #+#             */
/*   Updated: 2025/06/30 17:09:56 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_Node **stack_a, t_Node **stack_b)
{
	t_Node	*temp_b;
	t_Node	*temp_a;

	temp_b = *stack_b;
	temp_a = *stack_a;
	if (*stack_b == NULL)
		return ;
	*stack_b = (*stack_b)->next;
	*stack_a = temp_b;
	temp_b->next = temp_a;
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_Node **stack_a, t_Node **stack_b)
{
	t_Node	*temp_b;
	t_Node	*temp_a;

	temp_b = *stack_b;
	temp_a = *stack_a;
	if (*stack_a == NULL)
		return ;
	*stack_a = (*stack_a)->next;
	*stack_b = temp_a;
	temp_a->next = temp_b;
	ft_putstr_fd("pb\n", 1);
}
