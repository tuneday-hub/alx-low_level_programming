#include "main.h"

/**
 * _strlen - gives the length of a string
 *
 * @s: parameter
 * author: tuneday
 * Return: an integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
