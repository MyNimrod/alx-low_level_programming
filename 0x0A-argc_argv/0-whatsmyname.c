#include "main.h"

/**
 * main - Entry into the program
 * @argc: argument count
 * @argv: the array of pointers to argc 
 * Description: prints its name, followed by a new line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
