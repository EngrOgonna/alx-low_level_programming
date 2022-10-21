#include "main.h"

/**
*print_numbers - prnt numbers from 0-9
*
*Return: void
*/

void print_numbers(void)
{
	char c = '0';

	for (c <= '9')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
