#include "main.h"

/**
*print_numbers - prnt numbers from 0-9
*
*Return: void
*/

void print_numbers(void)
{
	int a, i, j = 1, x = 0;

	printf("Input number of lines: ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
		{
		while (x < 9)
		{
			printf("%d ", j++);
			x++;
		}
		x = 0;
		printf("\n");
		}

	return (0);
}
