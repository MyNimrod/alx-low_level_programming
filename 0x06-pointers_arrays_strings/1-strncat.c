#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes
 * @dest: the first string to be overwritten
 * @src: the second string to be appended to dest
 * @n: number if integers to concatenate
 * Description: appends the src string to the oldest string
 * but based on input integer n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	if (dest[i - 1] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

