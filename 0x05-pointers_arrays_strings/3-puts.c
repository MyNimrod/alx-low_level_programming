#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string input
 * Description: a programm that accepts string and prints
 * Return: Nothing
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar (str[a]);
		a++;
	}
	_putchar ('\n');
}
