#include "main.h"
/**
 * _strconcat - concatenates two strings
 * @s1: first array of characters
 * @s2: second array of characters
 * Return: a char
 */
char *_strconcat(char *s1, char *s2)
{
	unsigned int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[0];
		i++;
	}
	s1[i] = '\0';

	return (s1);
}

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
		rtnPtr = _strconcat(s1, s2);

		return(rtnPtr);
	}
}
