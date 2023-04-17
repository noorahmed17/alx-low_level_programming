#include "dog.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
/**
 * new_dog - creates a new dog
 * @name: function parameter
 * @age: function parameter
 * @owner: function parameter
 * Return: New_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_dog;
	char *new_name, *new_owner;

	New_dog = malloc(sizeof(dog_t));
	if (New_dog == NULL)
	{
		free(New_dog);
		return (NULL);
	}
	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_name == NULL)
	{
		free(New_dog);
		return (NULL);
	}
	if (new_owner == NULL)
	{
		free(New_dog);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	New_dog->name = new_name;
	New_dog->owner = new_owner;
	New_dog->age = age;
	return (New_dog);
}
