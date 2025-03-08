/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:19:32 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/03/01 09:19:36 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_value(t_stack **stack)
{
	t_stack	*tmp;
	int		value;

	if (!*stack)
		return (0);
	tmp = *stack;
	value = tmp->data;
	while (tmp != NULL)
	{
		if (value > tmp->data)
			value = tmp->data;
		tmp = tmp->next;
	}
	return (value);
}

void	push_smallest(t_stack **a, t_stack **b)
{
	int		smallest;
	int		i;
	t_stack	*tmp;

	smallest = smallest_value(a);
	tmp = *a;
	i = 0;
	while (tmp != NULL)
	{
		if (tmp->data == smallest)
			break ;
		i++;
		tmp = tmp->next;
	}
	while ((*a)->data != smallest)
	{
		if (i <= 2)
			ra (a);
		else
			rra (a);
	}
	pb (a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	push_smallest(a, b);
	push_smallest(a, b);
	sort_three_helper(a);
	pa(a, b);
	pa(a, b);
}

void	sort_four(t_stack **a, t_stack **b)
{
	push_smallest(a, b);
	sort_three_helper(a);
	pa(a, b);
}
