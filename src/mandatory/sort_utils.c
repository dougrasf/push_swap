/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:29:40 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/01 22:58:06 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void do_best_move(t_stack *stack, t_score *score)
{
    while(stack->a[0] != score->valuea || stack->b[0] != score->valueb)
    {       
        if(stack->a[0] != score->valuea)
        {
            if(score->ia <= stack->sizea / 2)
                ra(stack);
            else
                rra(stack);
        }
        if(stack->b[0] != score->valueb)
        {
            if(score->ib <= stack->sizeb / 2)
                rb(stack);
            else
                rrb(stack);
        }
    }
    pa(stack);
}

int biggest_value(int *stack, int size)
{
    int i;
    int biggest;

    i = -1;
    biggest = 0;
    while(++i < size)
        if(stack[i] > stack[biggest])
            biggest = i;
    return(biggest);
}

int smallest_value(int *stack, int size)
{
    int i;
    int smallest;

    i = -1;
    smallest = 0;
    while(++i < size)
        if(stack[i] < stack[smallest])
            smallest = i;
    return(smallest);
}

int best_a_option(int *stacka, int sizea, int valueb)
{
    int ia;
    int valuea;

    if(valueb > stacka[biggest_value(stacka, sizea)])
        return(smallest_value(stacka, sizea));
    else
    {
        valuea = biggest_value(stacka, sizea);
        ia = -1;
        while(++ia < sizea)
            if((stacka[ia] > valueb) && ((valueb - stacka[ia]) > (valueb - stacka[valuea])))
                valuea = ia;
    }
    return(valuea);
}

void get_best_score(t_stack *stack, t_score *score)
{
    int ib;
    int best_a;
    int moves;

    ib = -1;
    score->moves = stack->sizea + stack->sizeb;
    while(++ib < stack->sizeb)
    {
        best_a = best_a_option(stack->a, stack->sizea, stack->b[ib]);
        moves = ib + best_a + 1;
        if(best_a > stack->sizea / 2)
            moves += stack->sizea - (best_a * 2);
        if(ib > stack->sizeb / 2)
            moves += stack->sizeb - (ib * 2);
        if(moves < score->moves)
        {
            score->ia = best_a;
            score->ib = ib;
            score->valuea = stack->a[best_a];
            score->valueb = stack->b[ib];
            score->moves = moves;
        }
    }
}
