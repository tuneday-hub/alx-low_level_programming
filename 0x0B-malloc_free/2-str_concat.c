#include "main.h"
/**
 * _strlen - count array
 * @s: array of characters
 * Return: i
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
 * str_concat - concatenates two strings
 * @s1: First array
 * @s2: Second array
 * Return: a pointer char
 */
char *str_concat(char *s1, char *s2)
{
	char *rtnPtr;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	rtnPtr = (char *) malloc(((_strlen(s1) + _strlen(s2)) * sizeof(char)) + 1);

	if (rtnPtr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			rtnPtr[i] = *(s1 + i);

		for (j = 0; s2[j] != '\0'; j++)
		{
			rtnPtr[i] = s2[j];
			i++;
		}

		return (rtnPtr);
	}
}
