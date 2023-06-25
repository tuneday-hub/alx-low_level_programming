#include <stdio.h>
#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
