#include <stdio.h>

/**
 * main - prints fizz buzz
 *
 * author: tuneday
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i / 20 != 5)
		{
			printf("Buzz ");
		}
		else if (i / 20 == 5)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
