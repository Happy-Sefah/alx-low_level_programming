#include <stdio.h>
/**
 * main - prints all possible combination of single digit
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int c = 0;

	int d = 9;

	while (c <= d)
	{
		putchar(c + '0');

		if (c != d)
		{
			putchar(',');
			putchar(' ');
		}

		c++;
	}

	putchar('\n');
	return (0);
}
