#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 if successful else 1 and print "Error"
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%i\n", c);

	return (0);
}
