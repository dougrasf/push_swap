/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:29:33 by dofranci          #+#    #+#             */
/*   Updated: 2023/02/02 21:57:18 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	start(t_stack *stack, int argc, char **argv)
{
	int	i;

	stack->a = malloc(sizeof (int) * argc - 1);
	if (stack->a == NULL)
		return ;
	stack->b = malloc(sizeof (int) * argc - 1);
	if (stack->b == NULL)
		return ;
	i = 0;
	while (argv[i + 1])
	{
		stack->a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	stack->sizea = argc - 1;
	stack->sizeb = 0;
	howmany(stack);
	free(stack->a);
	free(stack->b);
}

int	verify2(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

long int	ft_atoi2(const char *str)
{
	int			negative;
	long int	result;

	result = 0;
	negative = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * negative);
}

int	verify(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (2);
	i = 1;
	while (argv[i])
	{
		if (verify2(argv[i]) != 0)
			return (1);
		if (ft_atoi2(argv[i]) > 2147483647 || ft_atoi2(argv[i]) < -2147483648)
			return (1);
		j = 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]) && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		result;

	result = verify(argc, argv);
	if (result != 0)
	{
		if (result == 2)
			return (2);
		else
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			return (1);
		}
	}
	stack = malloc(sizeof (t_stack));
	if (stack == NULL)
		return (1);
	start(stack, argc, argv);
	free(stack);
	return (0);
}
