/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:09:27 by jissa             #+#    #+#             */
/*   Updated: 2025/06/26 13:29:19 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(Node **stack_a, Node **stack_b)
{
	Node *temp_b = *stack_b;
	Node *temp_a = *stack_a;
	
	if (*stack_b == NULL)
		return ;
	*stack_b = (*stack_b)->next;
	*stack_a = temp_b;
	temp_b->next = temp_a;
	ft_putstr_fd("pa\n", 1);
}
void push_b(Node **stack_a, Node **stack_b)
{
	Node *temp_b = *stack_b;
	Node *temp_a = *stack_a;
	
	if (*stack_a == NULL)
		return ;
	*stack_a = (*stack_a)->next;
	*stack_b = temp_a;
	temp_a->next = temp_b;
	ft_putstr_fd("pb\n", 1);
}