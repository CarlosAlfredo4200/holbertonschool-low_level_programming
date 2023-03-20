#ifndef DOG_H
#define DOG_H
/**
*struct dog - Define a new type struct dog with the following elements
*@name: name  char *
*@age: type = float
*@owner: type = char *
* Return: My name is Poppy, and I am 3.5 :) - Woof!
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

