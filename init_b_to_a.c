/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:52:22 by saskin            #+#    #+#             */
/*   Updated: 2025/03/18 19:02:23 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_node *stack)
{
	int		i;
	int		median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		stack->above_median = (i <= median);
		stack = stack->next;
		++i;
	}
}

void	set_target_b(t_node *a, t_node *b)
{
	t_node	*iter_a;
	t_node	*target_node;
	long	best_match;

	while (b)
	{
		best_match = LONG_MAX;
		iter_a = a;
		while (iter_a)
		{
			if (iter_a->number > b->number && iter_a->number < best_match)
			{
				best_match = iter_a->number;
				target_node = iter_a;
			}
			iter_a = iter_a->next;
		}
		if (best_match == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	init_nodes_b(t_node *a, t_node *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
