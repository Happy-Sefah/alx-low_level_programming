#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	a = 'c';
	while
		(a <= 'z') {
			if ((a != 'q' && a != 'e') && a <= 'z')
				putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}