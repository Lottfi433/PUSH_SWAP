/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:18:29 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/03/05 12:01:52 by yazlaigi         ###   ########.fr       */
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
	write(2, "Error\n", 6);
	exit(1);
}
