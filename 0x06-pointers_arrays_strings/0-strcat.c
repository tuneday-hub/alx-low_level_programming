#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 * @dest: first string parameter
 * @src: second string parameter
 * Author: tuneday
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	return (dest);
}
