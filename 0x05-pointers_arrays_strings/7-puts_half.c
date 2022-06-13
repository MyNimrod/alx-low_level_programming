#include "main.h"

/**
 * puts_half - prints half of a string,
 * @str: Input of string
 * Description: prints half of a string,
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;

	if (i % 2 == 1)
	{
		j++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}
