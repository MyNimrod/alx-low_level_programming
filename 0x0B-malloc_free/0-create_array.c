#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the char array
 * @c: the byte filling
 * Description: allocates a char array and fills with byte
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);

	if (!size || a == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
