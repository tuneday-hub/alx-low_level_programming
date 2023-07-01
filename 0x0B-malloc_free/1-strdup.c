#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *rtnPtr;
	int lenOfStr;
	int count;

	lenOfStr = 0;
	while (str[lenOfStr != '\0'])
	{
		lenOfStr++;
	}

	rtnPtr = (char *) malloc((lenOfStr * sizeof(char)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	
	if (rtnPtr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < lenOfStr; count++)
		{
			rtnPtr[count] = str[count];
		}
		return (rtnPtr);
	}
}
