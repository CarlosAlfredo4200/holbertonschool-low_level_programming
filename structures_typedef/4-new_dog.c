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
    dog_t *newDog_t;
    int sizeName;
    int sizeOwner;
    int k, i, j , m;

    for (k = 0; name[k] != '\0'; k++)
         {
             sizeName++;
         }
    for (i = 0; owner[i] != '\0'; i++)
    {
             sizeOwner++;
    }
  
    sizeName = sizeOwner = 0;
  newDog_t = malloc(sizeof(dog_t));
  if (newDog_t == NULL)
    return (NULL);
  newDog_t->name = malloc(sizeName * sizeof(newDog_t->name));
  if (newDog_t == NULL)
    return (NULL);

  for (j = 0; j < sizeName; j++)
    newDog_t->name[j] = name[j];

  newDog_t->age = age;

  newDog_t->owner = malloc(sizeOwner * sizeof(newDog_t->owner));
  if (newDog_t == NULL)
    return (NULL);
  for (j = 0; j < sizeOwner; j++)
    newDog_t->owner[j] = owner[j];
  return (newDog_t);
}
