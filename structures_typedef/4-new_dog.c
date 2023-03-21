#include <stdlib.h>
#include "dog.h"
/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;
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
* new_dog - entry point
* @name: string from main, name of pet
* @age: number from main, age of pet
* @owner: string from main, owner of pet
* Return: p
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog_t;
int sizeName = 0;
int sizeOwner = 0;
int k, i;
for (k = 0; name[sizeName] != '\0'; k++)
{
sizeName++;
}
for (i = 0; owner[sizeOwner] != '\0'; i++)
{
sizeOwner++;
}
newDog_t = malloc(sizeof(dog_t));
if (newDog_t == NULL)
return (NULL);
newDog_t->name = malloc(sizeof(char) * (sizeName + 1));
if (newDog_t->name == NULL)
{
free(newDog_t);
return (NULL);
}
newDog_t->owner = malloc(sizeof(char) * (sizeOwner + 1));
if (newDog_t->owner == NULL)
{
free(newDog_t);
free(newDog_t->name);
return (NULL);
}
_strcpy(newDog_t->name, name);
_strcpy(newDog_t->owner, owner);
newDog_t->age = age;
return (newDog_t);
}
