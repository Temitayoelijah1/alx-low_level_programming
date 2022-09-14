#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from input to 98,
 * in order seperated by a comma the n by a space.
 * @n - the number to begin the counting at.
 */
void print_to_98(int n);
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while(n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
