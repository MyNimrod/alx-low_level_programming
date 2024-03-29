#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the pointer to the string to be reversed
 * Description: uses the pointer s to store the string to reverse it
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	if (s[1] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
	else
	{
		_putchar(s[0]);
	}
}
