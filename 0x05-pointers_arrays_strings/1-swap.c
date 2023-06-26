#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integers to be swapped.
 * @b: The second integer to be swapped.
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
