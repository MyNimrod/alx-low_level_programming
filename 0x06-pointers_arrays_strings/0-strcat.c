#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string to be overwritten
 * @src: the second string to be appended to dest
 * Description: appends the src string to the dest string,
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}

