/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:19:19 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/03/01 09:19:21 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_stack	**a)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return (1);
	tmp = *a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sorting(t_stack **stack, t_stack **stack2)
{
	if (list_size(stack) == 3)
		sort_three_helper(stack);
	else if (list_size(stack) == 5)
		sort_five(stack, stack2);
	else if (list_size(stack) == 2)
		sort_two(stack);
	else if (list_size(stack) == 4)
		sort_four(stack, stack2);
	else
	{
		from_a_to_b(stack, stack2);
		from_b_to_a(stack, stack2);
	}
}
