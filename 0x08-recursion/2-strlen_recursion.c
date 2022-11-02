#include "main.h"
/**
 * _strlen_recursion- returns the length of string
 *
 * @s: the string to check the length of s
 *
 * Return: an integer that displays the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')

		return (1 + _stlren_recursion(s + 1));

		return (0);

}
