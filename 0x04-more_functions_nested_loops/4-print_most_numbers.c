#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers from 0 to 9,
 * followed by a new line.
 * Decription: Prints the numbers excluding 2 and 4.
 */
void print_most_numbers(void)
{
int x = 0;

for ( x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
putchar(x + '0');
}
}
putchar('\n');
}
