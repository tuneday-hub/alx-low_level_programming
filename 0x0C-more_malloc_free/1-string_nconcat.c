#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Author: tuneday
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1, size2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	size2 = 0;
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
		n = size2;
	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';

	return (ptr);

}
