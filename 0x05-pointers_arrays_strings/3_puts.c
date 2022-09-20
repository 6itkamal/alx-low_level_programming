#include  "main.h"

/**
 * _puts - prints string
 * @str: string to be printed
 *
 * Description: print a string
 * On sucess: returns no errors
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
}
