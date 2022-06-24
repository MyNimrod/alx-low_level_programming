#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * numchecker - verifies if string has only numbers
 * @s: string to check
 * Description: return 1 if only numbers in string, 0 if not
 * Return: 1 if only numbers, 0 if not
 */
int numchecker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - entry into the program
 * @argc: argument count
 * @argv: array of pointers to argc
 * Description:  prints all arguments it receives.
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (numchecker(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
