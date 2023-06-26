#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 if successful else 1 then print "Error"
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		sum = 0;
		printf("%i\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				sum = "";
				printf("Error\n");

				break;

				return (1);
			}
			else
			{ 
				sum += atoi(argv[i]);
			}
			printf("%i\n", sum);
		}
	}

	return (0);
}
