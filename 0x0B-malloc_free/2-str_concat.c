#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Description:
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	char *ret;

	while (s1 && *s1++)
		length1++;
	while (s2 && *s2++)
		length2++;
	ret = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!ret)
		return (NULL);
	ret += length1 + length2;
	*ret = '\0';
	for (s2--; length2--;)
		*--ret = *--s2;
	for (s1--; length1--;)
		*--ret = *--s1;
	return (ret);
}
