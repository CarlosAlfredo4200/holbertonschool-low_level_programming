#include <stdio.h>
#include "dog.h"
/**
*init_dog - Write a function that initialize a variable of type struct
*@d: struct
*@name: name  char *
*@age: type = float
*@owner: type = char *
* Return: My name is Poppy, and I am 3.5 :) - Woof!
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
