#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string to overwrite
 * @src: string to copy
 * @n: number to check
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);

	return (dest);
}
