#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of string
 * @s: input value
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies a string
 * @dest: input value
 * @src: input value
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog -  function that creates a new dog
 * @name: input value
 * @age: input value
 * @owner: input value
 * Return: NULL is it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1;
	int len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
