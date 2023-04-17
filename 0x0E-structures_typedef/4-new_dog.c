#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - the length of the string
 * @str: the string
 * Return: length
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copy string
 * @src: the source of string
 * @dest: the destination copy to
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n]; n++)
		dest[n] = src[n];
	dest[n] = '\0';
	return (dest);
}
/**
 * new_dog - new poppy
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
