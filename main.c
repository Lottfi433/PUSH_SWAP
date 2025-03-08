/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:18:08 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/03/05 12:02:54 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main_parsing(t_stack **a, char **av)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (av[i])
	{
		check_args(av[i]);
		split = ft_split(av[i], ' ');
		j = 0;
		if (split == NULL || split[j] == NULL)
			error_in_split(split);
		while (split[j])
		{
			if (!is_valid_number(split[j]))
				error_in_split (split);
			add_back(a, ft_atoi(split[j]));
			j++;
		}
		i++;
		if (duplicate_check(*a) == 0)
			error_in_split (split);
		free_args(split);
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac >= 2)
	{
		main_parsing(&a, av);
		if (sort_check(&a) != 1)
		{
			list_indix(&a);
			sorting(&a, &b);
		}
	}
	free_list(a);
}
