#include "main.h"

/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *i;
unsigned int p;

if (nmemb == 0 || size == 0)
return (NULL);
i = malloc(nmemb * size);
if (i == NULL)
return (NULL);
for (p = 0; p < (nmemb * size); p++)
i[p] = 0;
return (i);
}
