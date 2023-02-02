/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:29:49 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/01 22:51:29 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void sortthree(t_stack *stack)
{
	if(stack->a[0] > stack->a[1])
	{
		if(stack->a[1] < stack->a[2])
		{
			if(stack->a[2] > stack->a[0])
				sa(stack);
			else 
				ra(stack);
		}
		else
		{
			sa(stack);
			rra(stack);
		}
	}
	else if(stack->a[1] > stack->a[2])
	{
		if(stack->a[2] > stack->a[0])
		{
			sa(stack);
			ra(stack);
		}
		else
			rra(stack);
	}
}

int a_is_sorted(int *stack, int size)
{
    int i;

    i = 1;
    while(i < size)
    {
        if(stack[i] > stack[i - 1])
            i++;
        else
            return(1);
    }
    return(0);
}

void sort(t_stack *stack)
{
	t_score *score;	

	score = malloc(sizeof(t_score));
	while(stack->sizea > 3)
		pb(stack);
	sortthree(stack);
	while(stack->sizeb > 0)
	{
			get_best_score(stack, score);
			do_best_move(stack, score);
	}
	while(a_is_sorted(stack->a, stack->sizea) != 0)
	{
		if(smallest_value(stack->a, stack->sizea) <= stack->sizea / 2)
			ra(stack);
		else
			rra(stack);
	}
	free(score);
}

void howmany(t_stack *stack)
{
	if(stack->sizea == 2)
		if(stack->a[0] > stack->a[1])
			sa(stack);
	if(stack->sizea == 3)
		sortthree(stack);
	if(stack->sizea > 3)
		sort(stack);
}

