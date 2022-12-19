#include "main.h"

/**
 * swap_int- swap the values of two integers.
 * @a swap the value of integer a.
 * @b swap the value of integer b.
 * return: void
 */

void swap_int (int *a, int *b)
{
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
