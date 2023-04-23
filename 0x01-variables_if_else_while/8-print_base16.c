#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
