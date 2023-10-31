#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of array
* @height: height of array
* Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
int **array, i, j;
int len = width * height;

if (len <= 0)
return ((int **)NULL);

array = (int **)malloc(sizeof(int *) * height);
if (array == (int **)NULL)
return ((int **)NULL);

for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(sizeof(int) * width);
if (array[i] == (int *)NULL)
{
for (i--; i >= 0; i--)
free(array[i]);
free(array);
return ((int **)NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
array[i][j] = 0;

return (array);
}
