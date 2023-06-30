#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array of chars dynamically
 * @size: size of the array
 * @c: the string
 * Return: 0 means success except defined otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	buffer = (char *) malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			buffer[i] = c;
		}
		return (buffer);
	}
}
