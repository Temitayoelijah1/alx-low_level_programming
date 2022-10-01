#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: integer to look check
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);

	return (dest);
}
