#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first string parameter
 * @src: second string parameter
 * @n: value
 * Author: tuneday
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
