#include <stdio.h>

/**
 * main - print name of of this source file
 * Description: prints the name of the file it was compiled from
 * Return: 0
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
