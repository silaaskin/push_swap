/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:53:32 by saskin            #+#    #+#             */
/*   Updated: 2025/03/18 19:20:11 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_node **s)
{
	t_node	*temp;
	t_node	*prev;

	if (!s || !(*s) || !(*s)->next)
		return ;
	prev = *s;
	while (prev->next->next)
		prev = prev->next;
	temp = prev->next;
	prev->next = NULL;
	temp->next = *s;
	*s = temp;
}

void	rra(t_node **a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}
