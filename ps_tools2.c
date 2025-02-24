/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:19:05 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/24 09:53:34 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] == '0')
		i++;
	j = 0;
	while (str[i])
	{
		i++;
		j++;
	}
	return (j);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	list_size(t_stack **a)
{
	t_stack	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	error_in_split(char **split)
{
	free_args(split);
	write(2, "Error", 5);
	exit(1);
}
