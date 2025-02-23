/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:00:18 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/23 12:30:42 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(char *str)
{
	int	i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		error();
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '\0')
		error();
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	s = 1;
	r = 0;
	i = 0;
	if (str == NULL || str[0] == '\0' || ft_strlen(str) > 11)
		error();
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		r = r * 10 + (str[i++] - '0');
	return (r * s);
}

void	add_back(t_stack **a, int value)
{
	t_stack	*new_node;
	t_stack	*tmp;

	new_node = malloc (sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->data = value;
	new_node->next = NULL;
	if (*a == NULL)
	{
		*a = new_node;
		return ;
	}
	tmp = *a;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
}

int	is_valid_number(char *av)
{
	int		i;
	long	num;

	i = 0;
	if (av == NULL || av[0] == '\0' || ft_strlen(av) > 11)
		return (0);
	if (av[i] == '-' || av[i] == '+')
		i++;
	if (av[i] == '\0')
		return (0);
	while (av[i] != '\0')
	{
		if (av[i] < '0' || av[i] > '9')
			return (0);
		i++;
	}
	num = ft_atoi(av);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}

int	duplicate_check(t_stack *a)
{
	t_stack	*current;
	t_stack	*check;

	current = a;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (current->data == check->data)
				return (0);
			check = check->next;
		}
		current = current->next;
	}
	return (1);
}
