#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Description:
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Description:
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (name && !d->name)
		return (free(d), NULL);
	d->owner = _strdup(owner);
	if (owner && !d->owner)
		return (free(d->name), free(d), NULL);
	d->age = age;
	return (d);
}
