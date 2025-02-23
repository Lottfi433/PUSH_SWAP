/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:59:31 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/22 10:34:02 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct node
{
	int			data;
	int			index;
	struct node	*next;
}	t_stack;

char	**ft_split(char const *s, char c);
void	main_parsing(t_stack **a, char **av);
void	add_back(t_stack **a, int value);
int		is_valid_number(char *av);
int		duplicate_check(t_stack *a);
void	free_args(char **av);
void	error(void);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	check_args(char *str);
void	free_list(t_stack *a_head);
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	push(t_stack **src, t_stack **dst);
void	reverse_rotate(t_stack **stack);
void	sb(t_stack **b);
void	sa(t_stack **a);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack	**b);
void	rrr(t_stack **a, t_stack **b);
int		sort_check(t_stack	**a);
void	sorting(t_stack **stack, int ac, t_stack **stack2);
void	sort_three_helper(t_stack **stack);
void	sort_three_helper2(t_stack **stack, int first, int second, int third);
void	sort_three(t_stack **stack, int first, int second, int third);
int		smallest_value(t_stack **stack);
void	sort_five(t_stack **a, t_stack **b);
void	sort_two(t_stack **stack);
void	sort_four(t_stack **a, t_stack **b);
void	list_indix(t_stack **stack);
void	from_a_to_b(t_stack **a, t_stack **b);
void	from_b_to_a(t_stack **a, t_stack **b);
int		last_list_index(t_stack **a);
int		list_size(t_stack **a);
int		half_index(t_stack **a, int index);
#endif