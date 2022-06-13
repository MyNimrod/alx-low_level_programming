#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s : the array that holds the characters
 * Description: counts length of a string
 * Return: i (the length count)
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
