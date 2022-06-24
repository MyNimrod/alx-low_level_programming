#include "main.h"
#include <stdio.h>

/**
 * main - entry into the program
 * @argc: argument count
 * @argv: array of pointers to argc
 * Description:  prints all arguments it receives.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
