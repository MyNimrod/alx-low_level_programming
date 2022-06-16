#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * upper - capitalizes a letter if lower case
 * @c: pointer to character
 * Description: checks the pointer and capitalizes in the address
 * Return: c
 */
char *upper(char *c)
{
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;
	return (c);
}


/**
 * new_word - compares char to chars that indicate a new word
 * @c: char to be checked
 * Description: to check if the char indicates new word
 * Return: 1 if word 0 is not
 */
int new_word(char c)
{
	int i = 0;
	char *word = " \t\n,;.!?\"(){}";

	while (word[i] != '\0')
	{
		if (c == word[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalize all words
 * @str: string to modify
 * Description: capitalize all words
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	if (str == NULL)
		return (NULL);
	upper(str);
	if (str[0] == '\0')
		return (str);
	for (i = 1; str[i] != '\0'; i++)
	{
		if (new_word(str[i - 1]) == 1)
			upper(&str[i]);
	}
	return (str);
}
