/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:29:23 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/02 20:58:12 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	sizea;
	int	sizeb;
	int	score;
	int	newscore;
	int	move;
}	t_stack;

typedef struct s_score
{
	int	moves;
	int	ia;
	int	ib;
	int	valuea;
	int	valueb;
}	t_score;

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
void	sort(t_stack *stack);
void	sortthree(t_stack *stack);
void	howmany(t_stack *stack);
void	get_best_score(t_stack *stack, t_score *score);
void	do_best_move(t_stack *stack, t_score *score);
int		best_option(int *stacka, int sizea, int valueb);
int		smallest_value(int *stack, int size);
int		biggest_value(int *stack, int size);

#endif
