#include "main.h"
/**
 * _puts_recursion - prints a string followed by anew line
 *
 * @s: the stringthat prints
 * Return: Nothing
 */
void _puts_recursion(char)
{
	if (*s == '\0')
	{
		_putchar('\n);
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
