#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Description: similar to the standard library strchr
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strspn - gets length of prefix substring
 * @s: string to check
 * @accept: bytes composing prefix
 * Description: similar to the standard library strspn
 * Return: int i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
