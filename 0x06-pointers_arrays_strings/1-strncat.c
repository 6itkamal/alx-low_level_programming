#include "main.h"

/**
 * _strncat - concatenate two strings but inputs number of bytes
 * @src: string to be completed at end
 * @dest: string to be appende
 *
 * Return: returns new concaenated string
 */

char *strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for(index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
