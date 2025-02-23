/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:19:19 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/23 10:36:02 by yasserlotfi      ###   ########.fr       */
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

void	sorting(t_stack **stack, int ac, t_stack **stack2)
{
	if (ac == 4)
		sort_three_helper(stack);
	else if (ac == 6)
		sort_five(stack, stack2);
	else if (ac == 3)
		sort_two(stack);
	else if (ac == 5)
		sort_four(stack, stack2);
	else
	{
		from_a_to_b(stack, stack2);
		from_b_to_a(stack, stack2);
	}
}
