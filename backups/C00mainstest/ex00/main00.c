#include "../../ex00/ft_putchar.c"
#include <stdio.h>
#include <unistd.h>

int main()
{
	char c;
	c = "b";
	scanf("%c", &c);
	ft_putchar(c);
	return (0);
}