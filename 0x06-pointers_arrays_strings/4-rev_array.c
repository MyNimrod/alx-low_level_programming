#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to be reversed
 * @n: the number of elememnts of the array
 * Description: reverses the content of an array of integers based on n
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, stor;


	for (i = 0; i < n; i++)
	{
		stor = a[n - i];
		a[n - 1] = a[i];
		a[i] = stor;
		n--;
	}
}

