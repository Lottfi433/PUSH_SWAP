/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:09:00 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/22 10:33:16 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_indix(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*copy;
	int		index;

	tmp = *stack;
	while (tmp)
	{
		index = 0;
		copy = *stack;
		while (copy)
		{
			if (tmp->data > copy->data)
				index++;
			copy = copy->next;
		}
		tmp->index = index;
		tmp = tmp->next;
	}
}

int	half_index(t_stack **a, int index)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = (*a);
	while (tmp)
	{
		if (tmp->index == index)
			break ;
		i++;
		tmp = tmp->next;
	}
	if (i < list_size(a) / 2)
		return (1);
	else
		return (2);
}

int	last_list_index(t_stack **a)
{
	t_stack	*tmp;

	if (!a || !(*a))
		return (-1);
	tmp = (*a);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->index);
}

void	from_a_to_b(t_stack **a, t_stack **b)
{
	int	pv1;
	int	pv2;

	pv2 = 0;
	list_indix(a);
	while (list_size(a) > 3)
	{
		pv1 = (list_size(a) / 6) + pv2;
		pv2 = (list_size(a) / 3) + pv2;
		while (list_size(a) > 3 && list_size(b) < pv2)
		{
			if (list_size(b) > 1 && (*b)->index < pv1 && (*a)->index >= pv2)
				rr(a, b);
			else if (list_size(b) > 1 && (*b)->index < pv1)
				rb (b);
			if ((*a)->index >= pv2)
				ra(a);
			else if ((*a)->index < pv2)
				pb (a, b);
		}
	}
	sort_three_helper(a);
}

void	from_b_to_a(t_stack **a, t_stack **b)
{
	int	end;

	end = last_list_index(a);
	while (list_size(b) > 0)
	{
		if ((*a)->index - 1 == (*b)->index)
			pa(a, b);
		else if ((*a)->index - 1 == last_list_index(b))
			(rrb(b), pa(a, b));
		else if (last_list_index(a) == end)
			(pa(a, b), ra(a));
		else if (last_list_index(a) < (*b)->index)
			(pa(a, b), ra(a));
		else if (last_list_index(a) < last_list_index(b))
			(rrb(b), pa(a, b), ra(a));
		else if (last_list_index(a) == (*a)->index - 1)
			(rra(a));
		else if (half_index(b, (*a)->index - 1) == 1)
			rb(b);
		else if (half_index(b, (*a)->index - 1) == 2)
			rrb(b);
	}
	while (last_list_index(a) != end)
		rra (a);
}
