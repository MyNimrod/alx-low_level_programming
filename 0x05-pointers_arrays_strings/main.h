#include <unistd.h>


/* _putchar - prints the character to the stdout
 * reset_to_98 - takes a pointer to an int as parameter and updates the value
 * swap_int - swaps the value of two integers 
 * _strlen - returns the length of a string
 * _puts - prints a string, followed by a new line, to stdout
 * print_rev - prints a string, in reverse, followed by a new line.
 * rev_string - function that reverses a string
 * puts2 - prints every other character of a string
 *puts_half -  prints half of a string, followed by a new line.
 *
 */



int _putchar(char);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
