#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: the string to measure
 * Description: The standard library provides a similar function strlen
 * Return: integer length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
