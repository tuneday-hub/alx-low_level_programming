#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: an int
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dst;

	if (str == NULL)
	{
		return (NULL);
	}

	dst = (char *) malloc((_strlen(str) * sizeof(char)) + 1);

	if (dst == NULL)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
