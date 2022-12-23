#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: pointer to array
 * @n: pointer of elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}

}
