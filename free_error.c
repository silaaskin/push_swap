/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:52:04 by saskin            #+#    #+#             */
/*   Updated: 2025/03/18 20:45:51 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	free_node(t_node **s)
{
	t_node	*temp;

	while (*s)
	{
		temp = (*s)->next;
		free(*s);
		*s = temp;
	}
	*s = NULL;
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
