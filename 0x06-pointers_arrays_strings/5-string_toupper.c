#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: the input character
 * Description: takes a string input and coverts to uppercase
 * Return: Nothing
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
