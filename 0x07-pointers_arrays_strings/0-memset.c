#include "main.h"

/**
 * _memset - fills buffer memory with constants byte
 * @s: pointer to the buffer
 * @b: the constant byte
 * @n: size of the buffer to fill
 * Description: Similar to the standard library memset
 * Return: a pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s + n) = b;
	}
	return (s);
}
