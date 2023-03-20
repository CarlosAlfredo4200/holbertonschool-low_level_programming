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
    struct dog *newDog_t;
    int sizeName = 0;
    int sizeOwner = 0;
    int k = 0, i = 0;

    for (k = 0; name[k] != '\0'; k++)
    {
        sizeName++;
    }
    for (i = 0; owner[i] != '\0'; i++)
    {
        sizeOwner++;
    }

    newDog_t = malloc(sizeof(dog_t));
    if (newDog_t == NULL)
        return (NULL);

    newDog_t->name = malloc(sizeof(char) * (sizeName + 1) );
    if (newDog_t->name == NULL)
    {
        free(newDog_t);
        return (NULL);
    }

    for (k = 0; k < sizeName; k++)
        newDog_t->name[k] = name[k];

    newDog_t->age = age;

    newDog_t->owner = malloc(sizeof(char) * (sizeOwner + 1));
    if (newDog_t->owner == NULL)
    {
        free(newDog_t->name);
        free(newDog_t);
        return (NULL);
    }
    for (k = 0; k < sizeOwner; k++)
        newDog_t->owner[k] = owner[k];
    return (newDog_t);
}
