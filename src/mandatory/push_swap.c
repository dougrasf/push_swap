/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:29:33 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/01 22:31:55 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void printstack(t_stack *stack)
{
	ft_printf("\nstacka:");
   for (int i = 0; i < stack->sizea; i++)
       ft_printf("%d ", stack->a[i]);
	ft_printf("\nstackb:");
   for (int i = 0; i < stack->sizeb; i++)
       ft_printf("%d ", stack->b[i]);
	ft_printf("\n\n");
}

void start(t_stack *stack, int argc, char **argv)
{
	int i;

	stack->a = malloc(sizeof (int)* argc - 1);
	stack->b = malloc(sizeof (int)* argc - 1);
	i = 0;
	while(argv[i+1])
	{
		stack->a[i] = ft_atoi(argv[i+1]);
		i++;
	}
	stack->sizea = argc - 1;
	stack->sizeb = 0;
	howmany(stack);
	free(stack->a);
	free(stack->b);
}

int verify(int argc, char **argv)
{
	int i;
	int j;

	if(argc < 2)
		return(1);
	i = 1;
	while(argv[i])
	{
		j = 1;
		while(argv[j])
		{
			if(ft_atoi(argv[i]) == ft_atoi(argv[j]) && j != i)
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	t_stack *stack;

	if(verify(argc, argv) != 0)
	{
		ft_printf("ERROR!\n");
		return(1);
	}
	stack = malloc(sizeof(t_stack));
	if(stack == NULL)
		return(1);
	start(stack, argc, argv);
	free(stack);
	return (0);
}
