#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Entry point
 * @s: is the pointer to check
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
		return (i);
}

/**
 * *_strcpy - Entry point
 * @dest: first string
 * @src: second string
 * Return: to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creat new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: to new dog and NULL if it fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	(*ndog).name = malloc(sizeof(char) * (a + 1));
	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	(*ndog).owner = malloc(sizeof(char) * (b + 1));
	if ((*ndog).owner == NULL)
	{
		free(ndog);
		free((*ndog).name);
		return (NULL);
	}

	_strcpy((*ndog).name, name);
_strcpy((*ndog).owner, owner);
(*ndog).age = age;

return (ndog);
}
