/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:06:53 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/02/23 13:02:52 by yasserlotfi      ###   ########.fr       */
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
			error ();
		while (split[j])
		{
			if (!is_valid_number(split[j]))
				error ();
			add_back(a, ft_atoi(split[j]));
			j++;
		}
		i++;
		if (duplicate_check(*a) == 0)
			error();
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
			sorting(&a, ac, &b);
		}
	}
}
