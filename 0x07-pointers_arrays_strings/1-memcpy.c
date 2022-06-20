#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: pointer to the dest buffer
 * @src: pointer to the source buffer
 * @n: number of bytes to copy
 * Decription: similar to the std library memcpy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);

}
