#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/include/libft.h"

typedef struct s_stack
{
	int *a;
	int *b;
	int sizea;
	int sizeb;

} t_stack; 

void sa(t_stack *stack);
void sb(t_stack *stack);
void ss(t_stack *stack);
void pa(t_stack *stack);
void pb(t_stack *stack);
void ra(t_stack *stack);
void rb(t_stack *stack);
void rr(t_stack *stack);
void rra(t_stack *stack);
void rrb(t_stack *stack);
void rrr(t_stack *stack);

#endif
