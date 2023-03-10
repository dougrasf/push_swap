/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:30:23 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/02 20:35:48 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->sizea < 1)
		return ;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	temp;

	if (stack->sizeb < 1)
		return ;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
