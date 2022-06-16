#include <unistd.h>

/**
 * _strcat - concatenates two strings.
 * _strncat - Similar to _strcat except it uses n bytes 
 * _strncpy - Copies a string 
 * _strcmp - a function that compares two strings
 * reverse_array - reverses the content of array of integers
 * string_toupper - changes all lower case chars to uppercase
 * cap_string - capitalizes all words of a string.
 * leet - encodes a string into 1337
 * rot13 - encodes a string using rot13
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
