#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * @str: the string input
 * Description: prints every other character of a string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
