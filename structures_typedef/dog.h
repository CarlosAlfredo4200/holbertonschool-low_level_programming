#ifndef DOG_H
#define DOG_H
/**
*struct dog - Define a new type struct dog with the following elements
*@name: name  char *
*@age: type = float
*@owner: type = char *
* Return: My name is Poppy, and I am 3.5 :) - Woof!
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
    

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


