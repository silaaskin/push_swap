/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:57:49 by saskin            #+#    #+#             */
/*   Updated: 2025/03/21 19:30:57 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	syntax_error(char *s)
{
	int	i;

	i = 0;
	if (!(s[0] == '-' || s[0] == '+' || (s[0] <= '9' && s[0] >= '0')))
		return (1);
	if ((s[0] == '-' || s[0] == '+') && !(s[1] <= '9' && s[1] >= '0'))
		return (1);
	while (s[++i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (1);
	}
	return (0);
}

int	duplicate_error(char **argv, int i)
{
	int		j;
	long	n1;
	long	n2;

	j = i;
	n1 = ft_atol(argv[i]);
	n2 = ft_atol(argv[j]);
	if (n1 == -2147483649 || n2 == -2147483649)
		return (1);
	while (argv[++j])
	{
		n1 = ft_atol(argv[i]);
		n2 = ft_atol(argv[j]);
		if (n1 == n2)
			return (1);
		else if (n1 == -2147483649 || n2 == -2147483649)
			return (1);
	}
	return (0);
}

int	error_check(char **argv, int argc)
{
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !args[0])
			return (free_split(args), ft_error(), 1);
		while (args[i])
		{
			if (syntax_error(args[i]) || duplicate_error(args, i))
				return (free_split(args), ft_error(), 1);
			i++;
		}
		free_split(args);
	}
	while (argv[++i] && argc != 2)
	{
		if (syntax_error(argv[i]) || duplicate_error(argv, i))
			return (ft_error(), 1);
	}
	return (0);
}
