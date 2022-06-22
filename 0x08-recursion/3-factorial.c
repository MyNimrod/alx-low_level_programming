#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: factorial of n
 * Description: a function to compute a factorial
 * Return: if n < 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
