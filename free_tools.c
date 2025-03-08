/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:17:51 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/03/05 11:53:58 by yazlaigi         ###   ########.fr       */
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
