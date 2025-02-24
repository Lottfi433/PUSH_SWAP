/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:23:51 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/24 09:48:11 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_args(char **av)
{
	int	i;

	i = 0;
	if (!av)
		return ;
	while (av[i])
	{
		free(av[i]);
		av[i] = NULL;
		i++;
	}
	free(av);
	av = NULL;
}

void	free_list(t_stack *a_head)
{
	t_stack	*tmp;

	if (!a_head)
		return ;
	while (a_head)
	{
		tmp = a_head->next;
		free(a_head);
		a_head = tmp;
	}
}
