#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp, l, f;

/* position of the last and first element in the array */

	l = n - 1;
	f = 0;


	while (f < l)
	{

/* the first element is kept temporarily in variable */

		temp = a[f];

/* the last element becomes the first element */

		a[f] = a[l];

/* the first element is retrieved from temp and becomes the last */

		a[l] = temp;

/* the index for f increments while l decrements */

		f++;
		l--;
	}
}
