#include "main.h"
#include <stddef.h>


/**
 * _puts_recursion - prints a string followed by newline
 * @s: the string to print
 * Description: The standard library provides a similar function puts
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
