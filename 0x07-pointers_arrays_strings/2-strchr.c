#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Description: similar to the std library strchr
 * Return: points to the first location
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);

}
