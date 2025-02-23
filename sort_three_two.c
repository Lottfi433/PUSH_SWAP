/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:16:09 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/17 11:43:57 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_helper(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = 0;
	second = 0;
	third = 0;
	sort_three_helper2(stack, first, second, third);
}

void	sort_three_helper2(t_stack **stack, int first, int second, int third)
{
	t_stack	*tmp;

	tmp = *stack;
	first = tmp->data;
	tmp = tmp->next;
	second = tmp->data;
	tmp = tmp->next;
	third = tmp->data;
	sort_three(stack, first, second, third);
}

void	sort_three(t_stack **stack, int first, int second, int third)
{
	if (first > second && second > third)
	{
		ra(stack);
		sa(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
	else if (first > second && second < third && third > first)
		sa(stack);
	else if (first > third && second < third)
		ra(stack);
	else if (first < third && second > third && first < second)
	{
		rra(stack);
		sa(stack);
	}
}

void	sort_two(t_stack **stack)
{
	if ((*stack)->data > (*stack)->next->data)
		sa(stack);
	else
		return ;
}
