#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - function that prints a string,followed by a new line,
 * to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
