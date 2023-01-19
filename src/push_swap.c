#include "../include/push_swap.h"

void swapa(t_stack *stack)
{
	int temp;

	if(stack->sizea < 1)
		return;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
}

void swapb(t_stack *stack)
{
	int temp;

	if(stack->sizeb < 1)
		return;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
}

void ss(t_stack *stack)
{
	swapa(stack);
	swapb(stack);
}

void pa(t_stack *stack)
{
	int i;

	i = stack->sizea - 1;
	if(stack->sizeb == 0)
		return;
	while(i > 0)
	{
		stack->a[i] = stack->a[i-1];
		i--;
	}
	stack->a[0] = stack->b[0];
	i = 0;
	stack->sizeb -= 1;
	while(i < (stack->sizea))
	{
		stack->b[i] = stack->b[i+1];
		i++;
	}
	stack->sizea += 1;
}

void pb(t_stack *stack)
{
	int i;

	i = stack->sizeb - 1;
	if(stack->sizea == 0)
		return;
	// pegar o indice 0 de b e adicionar ao topo de a
	while(i > 0)
	{
		stack->b[i] = stack->b[i-1];
		i--;
	}
	stack->b[0] = stack->a[0];
	i = 0;
	stack->sizea -= 1;
	while(i < (stack->sizea))
	{
		stack->a[i] = stack->a[i+1];
		i++;
	}
	stack->sizeb += 1;
}

void printstack(t_stack *stack)
{
	ft_printf("\nstacka:");
   for (int i = 0; i < stack->sizea; i++)
       ft_printf("%d ", stack->a[i]);
	ft_printf("\nstackb:");
   for (int i = 0; i < stack->sizeb; i++)
       ft_printf("%d", stack->b[i]);
	ft_printf("\n");
}

int main(int argc, char **argv)
{
	t_stack *stack;
	int i;

	i = 0;
	stack = malloc(sizeof(t_stack));
	stack->a = malloc(sizeof(argc - 1));
	stack->b = malloc(sizeof(argc - 1));
	while(argv[i+1])
	{
		stack->a[i] = ft_atoi(argv[i+1]);
		i++;
	} 
	stack->sizea = argc - 1;
	stack->sizeb = 0; 
	printstack(stack);
	ss(stack);
	printstack(stack);
	pb(stack);
	printstack(stack);
	pb(stack);
	printstack(stack);
	pa(stack);
	printstack(stack);
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
