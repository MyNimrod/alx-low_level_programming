#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer for a
 * @b:pointer for b
 * Description: swaps teh values of a and b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
