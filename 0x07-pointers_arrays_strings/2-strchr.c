#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: holds the character to locate
 * Description: similar to the std library strchr
 * Return: pointer to the first location
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
