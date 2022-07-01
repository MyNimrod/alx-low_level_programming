#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: @b: number of bytes to allocate
 * Description:
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
