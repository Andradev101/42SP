#include "../../ex03/ft_div_mod.c"

int main(void)
{
	int a;
	int b;
	int n;
	int m;

	a = 125;
	b = 10;

	int *div;
	int *mod;

	div = &n;
	mod = &m;
	ft_div_mod(a,b,div,mod);
	printf("%d %d", n, m);
}