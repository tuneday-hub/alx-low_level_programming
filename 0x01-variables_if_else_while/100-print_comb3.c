#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int b;

	for (b = 0; b < 100; b++)
	{
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		if (b != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
