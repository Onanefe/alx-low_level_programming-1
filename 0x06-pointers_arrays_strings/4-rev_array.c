#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: it's size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		q[n - i - 1] = c;
	}
}
