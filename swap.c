/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:53:47 by saskin            #+#    #+#             */
/*   Updated: 2025/03/18 19:17:16 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **s)
{
	t_node	*temp;

	if (!s || !(*s) || !(*s)->next)
		return ;
	temp = *s;
	*s = (*s)->next;
	temp->next = (*s)->next;
	(*s)->next = temp;
}

void	sa(t_node **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap(b);
	write(1, "sb\n", 3);
}
