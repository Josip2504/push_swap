/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsamardz <jsamardz@student.42heilnronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:50:03 by jsamardz          #+#    #+#             */
/*   Updated: 2024/05/06 16:00:14 by jsamardz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int		size_stack;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (-1);
	ft_input(ac, av);
	stack_a = fill_stack(ac, av);
	size_stack = stack_size(stack_a);
	stack_id(stack_a, size_stack + 1);
	ft_printf("%d", size_stack);
	// sort stacks
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
