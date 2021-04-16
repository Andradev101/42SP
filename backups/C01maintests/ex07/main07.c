#include "../../ex07/ft_rev_int_tab.c"
#include <unistd.h>
#include <stdio.h>
int		main(void)
{
	int numbers[9];
	int *digit;
	int index;

	index = 0;
	while (index < 9)
	{
		numbers[index] = index + 1;
		index++;
	}
	digit = &numbers[0];
	printf("before: ");
	ft_rev_int_tab(digit, 9);
	printf("\nafter : ");
}