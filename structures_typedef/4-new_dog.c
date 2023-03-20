#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

  int sizeName = 0;
  int sizeOwner = 0;
  int k;

  for (sizeName; name[sizeName] != '\0'; sizeName++)
    ;
  for (sizeOwner; owner[sizeOwner] != '\0'; sizeOwner++)
    ;

  dog_t *newDog_t;

  newDog_t = malloc(sizeof(dog_t));
  if (newDog_t == NULL)
    return (NULL);
  newDog_t->name = malloc(sizeName * sizeof(newDog_t->name));
  if (newDog_t == NULL)
    return (NULL);

  for (k = 0; k < sizeName; k++)
    newDog_t->name[k] = name[k];

  newDog_t->age = age;

  newDog_t->owner = malloc(sizeOwner * sizeof(newDog_t->owner));
  if (newDog_t == NULL)
    return (NULL);
  for (k = 0; k < sizeOwner; k++)
    newDog_t->owner[k] = owner[k];
  return (newDog_t);
}
