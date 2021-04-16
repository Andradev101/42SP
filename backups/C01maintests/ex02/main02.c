#include "../../ex02/ft_swap.c"
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: %d %d\n", a, b);
}
