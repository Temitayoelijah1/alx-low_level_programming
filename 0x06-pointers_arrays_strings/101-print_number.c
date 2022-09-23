#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	} else
	{
		n1 = n;
	}
	if ((num / 10) > 0)
		print_number(n1 / 10);

	putchar((n1 % 10) + '0');
}
