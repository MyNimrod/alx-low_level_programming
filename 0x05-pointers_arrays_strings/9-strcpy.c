#include "main.h"

/**
 * _strcpy - copies string *
 * @dest: string pointer
 * @src: buffer pointer
 * Description: cpies string src to buffer
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			return (dest);
		}

		i++;

	}
	return (dest);
}
