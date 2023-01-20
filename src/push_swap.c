#include "../include/push_swap.h"

void printstack(t_stack *stack)
{
	ft_printf("\nstacka:");
   for (int i = 0; i < stack->sizea; i++)
       ft_printf("%d ", stack->a[i]);
	ft_printf("\nstackb:");
   for (int i = 0; i < stack->sizeb; i++)
       ft_printf("%d ", stack->b[i]);
	ft_printf("\n");
}

int main(int argc, char **argv)
{
	t_stack *stack;
	int i;

	i = 0;
	stack = malloc(sizeof(t_stack));
	stack->a = malloc(sizeof (int)* argc - 1);
	stack->b = malloc(sizeof (int)* argc - 1);
	while(argv[i+1])
	{
		stack->a[i] = ft_atoi(argv[i+1]);
		i++;
	} 
	stack->sizea = argc - 1;
	stack->sizeb = 0; 
	printstack(stack);
	rra(stack);
	printstack(stack);
	free(stack->a);
	free(stack->b);
	free(stack);

   return 0;
}

	 // int	stack.sizea = sizeof(arr) / sizeof(int);
	 // int	stack.sizeb = sizeof(brr) / sizeof(brr[0]);
// void ss(int *x, int *y)
// {
	// swapx(x);
	// swapx(y);
// }
// 
// void pushx(int *x, int *y)
// {
	// 
// }
