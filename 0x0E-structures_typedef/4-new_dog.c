#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - length of a string
  * @s: String
  * Return: String length
  */
int _strlen(char *s)
{
int p;
p = 0;

for (; *s != '\0'; s++)
{
p++;
}

return (p);
}


/**
  * _strcpy - Copies a string
  * @dest: Destination
  * @src: Source
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
int q;

for (q = 0; src[q] != '\0'; q++)
{
dest[q] = src[q];
}

dest[q++] = '\0';

return (dest);
}

/**
  * new_dog - function that creates a new dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return: new dog (success), otherwise null
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *pixie;
int x = 0, y = 0;

if (name != NULL && owner != NULL)
{
x = _strlen(name) + 1;
y = _strlen(owner) + 1;
pixie = malloc(sizeof(dog_t));

if (pixie == NULL)
return (NULL);

pixie->name = malloc(sizeof(char) * x);

if (pixie->name == NULL)
{
free(pixie);
return (NULL);
}

pixie->owner = malloc(sizeof(char) * y);

if (pixie->owner == NULL)
{
free(pixie->name);
free(pixie);
return (NULL);
}

pixie->name = _strcpy(pixie->name, name);
pixie->owner = _strcpy(pixie->owner, owner);
pixie->age = age;
}
return (pixie);
}
