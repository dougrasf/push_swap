/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:30:07 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/02 20:33:54 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->sizea <= 1)
		return ;
	i = stack->sizea - 1;
	temp = stack->a[i];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = temp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->sizeb <= 1)
		return ;
	i = stack->sizeb - 1;
	temp = stack->b[i];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = temp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
