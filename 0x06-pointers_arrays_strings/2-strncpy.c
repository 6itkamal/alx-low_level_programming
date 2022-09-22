#include "main.h"

/**
 * _strncpy - func that copies strings
 * @src: source string
 * @dest: to appended
 * @n: max number of byte copied
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
