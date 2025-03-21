/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:20:33 by saskin            #+#    #+#             */
/*   Updated: 2025/03/21 16:10:42 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_node
{
	int				index;
	bool			cheapest;
	int				push_cost;
	bool			above_median;
	struct s_node	*target_node;
	int				number;
	struct s_node	*next;
}	t_node;

void	free_split(char **arr);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	free_node(t_node **s);
void	ft_error(void);
long	ft_atol(const char *s);
int		syntax_error(char *s);
int		duplicate_error(char **argv, int i);
int	error_check(char **argv, int argc);
t_node	*init_stack(char **argv, int argc, t_node **a);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	print_stack(t_node *stack);
char	**ft_split(char const *s, char c);
int		stack_sorted(t_node *stack);
int		stack_len(t_node *stack);
void	swap(t_node **head);
void	sa(t_node **a);
void	sb(t_node **b);
void	rotate(t_node **stack);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
t_node	*find_max(t_node *stack);
void	sort_three(t_node **a);
void	sort_stacks(t_node **a, t_node **b);
t_node	*get_cheapest(t_node *stack);
void	prep_for_push(t_node **stack, t_node *top_node, char stack_name);
void	move_a_to_b(t_node **a, t_node **b);
void	push_node(t_node **dest, t_node **src);
void	pa(t_node **a, t_node **b);
void	pb(t_node **b, t_node **a);
void	current_index(t_node *stack);
void	set_target_a(t_node *a, t_node *b);
void	cost_analysis_a(t_node *a, t_node *b);
void	set_cheapest(t_node *stack);
void	init_nodes_a(t_node *a, t_node *b);
void	set_target_b(t_node *a, t_node *b);
void	init_nodes_b(t_node *a, t_node *b);
t_node	*find_min(t_node *stack);
void	min_on_top(t_node **a);
void	move_b_to_a(t_node **a, t_node **b);
void	rev_rotate(t_node **s);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	rra(t_node **a);

#endif