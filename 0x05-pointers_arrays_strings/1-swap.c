#include "main.h"

/**
 * swap_int - swaps value of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int lux = *a;
	*a = *b;
	*b = lux;
}
