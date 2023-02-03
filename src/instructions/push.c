/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:30:00 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/02 20:32:49 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	if (stack->sizeb == 0)
		return ;
	i = stack->sizea;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	i = 0;
	stack->sizeb -= 1;
	stack->a[0] = stack->b[0];
	while (i < (stack->sizeb))
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->sizea += 1;
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->sizea == 0)
		return ;
	i = stack->sizeb;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	i = 0;
	stack->sizea -= 1;
	stack->b[0] = stack->a[0];
	while (i < (stack->sizea))
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->sizeb += 1;
	ft_printf("pb\n");
}
