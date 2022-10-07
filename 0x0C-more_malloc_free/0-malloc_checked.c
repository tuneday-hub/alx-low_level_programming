#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: integer variable dat holds the memory size
 * Return: ptr if successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
