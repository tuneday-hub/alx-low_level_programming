#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: nuber of elements in the array
 * Author: tuneday
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int count;

	n = n - 1;
	count = 0;
	while (n >= 0)
	{
		a[count] = a[n];
		n--;
		count++;
	}
}
