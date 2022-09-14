#include <main.h>

/**
 * _putchar - entry point
 *
 * Return: Always 1
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
