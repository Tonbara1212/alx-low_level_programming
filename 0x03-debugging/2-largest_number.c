#include "main.h"

/**
 * largest_number - checks for largest of 3 numbers
 * @x: first numner
 * @y: second number
 * @z: third number
 * Return: returns largest numbe
 */

int largest_number(int x, int y, int z)
{
	int largest;

	if (x >= y && x >= z)
	{
		largest = x;
	}
	else if (y >= x && y >= z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}
	return (largest);
}
