#include "main.h"
#include <stdio.h>

/**
 * main - entry into the program
 * @argc: argumnet count
 * @argv: array of pointers to the arguments
 * Description: prints the number of arguments entered
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;

	return (0);
}
