#include "main.h"

/**
 * print_sign - print sign of numbers
 *
 * @n: interger to be checked for sign
 *
 * Return: Returns 1 if integer is positive, -1 if negative and 0 if zero
 */
int print_sign(int n)
{

		if (n > 0)
		{
			_putchar('+');
			return (1);
		}

		if (n == 0)
		{
			_putchar('0');
			return (0);
		}

		else
		{
			_putchar('-');
			return (-1);
		}

}
