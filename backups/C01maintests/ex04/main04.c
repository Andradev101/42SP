#include "../../ex04/ft_ultimate_div_mod.c"
#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 125;
	b = 10;
	
	int *c;
	int *d;
	c = &a;
	d = &b;

	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(c,d);
	printf("%d %d\n", a, b);
}