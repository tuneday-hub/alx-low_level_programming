#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies a string pointed to src and dest
 * @dest: first parameter
 * @src: second parameter
 * author: tuneday
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
