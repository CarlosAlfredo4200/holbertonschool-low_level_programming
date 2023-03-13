#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **size;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
size = malloc(sizeof(int *) * height);
if (size == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
size[x] = malloc(sizeof(int) * width);
if (size[x] == NULL)
{
for (; x >= 0; x--)
free(size[x]);
free(size);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
size[x][y] = 0;
}
return (size);
}
