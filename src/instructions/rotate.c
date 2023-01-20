#include "../../include/push_swap.h"

void ra(t_stack *stack)
{
	int i;
	int temp;

	if(stack->sizea <= 1)
		return;
	i = 0;
	temp = stack->a[0];
	while(i < stack->sizea - 1)
	{
		stack->a[i] = stack->a[i+1];
		i++;
	}
	stack->a[i] = temp;
	ft_printf("ra\n");
}

void rb(t_stack *stack)
{
	int i;
	int temp;

	if(stack->sizeb <= 1)
		return;
	i = 0;
	temp = stack->b[0];
	while(i < stack->sizeb - 1)
	{
		stack->b[i] = stack->b[i+1];
		i++;
	}
	stack->b[i] = temp;
	ft_printf("rb\n");
}


void rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}