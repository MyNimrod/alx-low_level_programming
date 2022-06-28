#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 * Description: The standard library provides a similar function: strdup
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
		int length = 0;
		char *ret;

		if (str == NULL)
		{
			return (NULL);
		}
		while (*str++)
		{
			length++;
		}
		ret = malloc(sizeof(char) * (length + 1));
		if (!ret)
		{
			return (NULL);
		}
		for (length++; length--;)
		{
			ret[length] = *--str;
		}
		return (ret);
}
