#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(0);
	return (0);
}
