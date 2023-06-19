#include "main.h"

/**
 * *_strncat - A function that concatenates two strings
 * @dest: first string parameter
 * @src: second string parameter
 * @n: number of bytes to be concatenated
 * Author: tuneday
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
