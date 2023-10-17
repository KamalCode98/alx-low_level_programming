#include "main.h"
/**
 * swap_int - Entry point.
 * @a : variable that store the data.
 * @b : variable that store the data for the swap.
 * Description : Write a function that swaps the values of two integers.
 * Prototype : void swap_int(int *a, int *b)
 * Return : Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
