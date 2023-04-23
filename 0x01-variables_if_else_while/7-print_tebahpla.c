#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);

	putchar('\n');

	return (0);
}
