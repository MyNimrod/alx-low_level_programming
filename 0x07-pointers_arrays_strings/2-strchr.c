#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: holds the character to locate
 * Description: similar to the std library strchr
 * Return: pointer to the first location
 */
char *_strchr(char *s, char c);
{
	int i;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == c)
		{
			return (&src[i]);
		}
	}
	if (src[i] == c)
	{
		return (&src[i]);
	}
	return (NULL);
}
