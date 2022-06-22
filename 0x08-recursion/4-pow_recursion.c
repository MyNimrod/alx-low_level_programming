#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base
 * @y: the power
 * Description: similar to the std library pow
 * Return: if y<0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
