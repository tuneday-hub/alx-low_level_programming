#include <stdio.h>
/**
 * main - Program compilation begins from the main
 * Description: the program prints the name of the file it was compiled from
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
