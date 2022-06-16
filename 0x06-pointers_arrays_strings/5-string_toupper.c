#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @temp: the input character
 * Description: takes a string input and coverts to uppercase
 * Return: Nothing
 */

char *string_toupper(char *temp)
{
	int i;

	for (i = 0; temp[i] != '\0'; i++)
	{
		if (temp[i] >= 'a' && temp[i] <= 'z')
			temp[i] -= 32;
	}
	return (str);
}
