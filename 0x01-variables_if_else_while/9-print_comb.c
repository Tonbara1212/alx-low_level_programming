#include<stdio.h>

/**
 * main - starts the main function
 *
 * Description: Print 0-9 seperated by commas
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{

		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');
	return (0);
}
