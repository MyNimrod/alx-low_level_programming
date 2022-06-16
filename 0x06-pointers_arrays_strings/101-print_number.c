#include "main.h"
#include <stdio.h>

/**
 * exponent - prints power
 * @x: the base
 * @y: power
 * Description: prints x^y
 * Return: X^y
 */

int exponent(int x, int y)
{
	int power;

	power = x;

	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	while (y >= 2)
	{
		power  = power * x;
		y--;
	}
	return (power);
}

/**
 * print_number - prints an integer
 * @n:  the integer to be printed
 * Description:takes inputs and prints an integer
 * Return: Nothing
 */
void print_number(int n)
{
	int size, digit, counter, sign;

	sign = 1;
	digit = 0;
	size = 1;
	counter = n;

	if (n < 0)
		_putchar('-');
		sign = -1;
	for (; counter >= 10 || counter <= -10; size++)
	{
		counter = counter / 10;
	}
	counter = n;

	while (size >= 2)
	{
		digit = (counter / exponent(10, size - 1)) * sign;
		_putchar(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
	}
	_putchar(sign * counter % 10 + '0');
}
