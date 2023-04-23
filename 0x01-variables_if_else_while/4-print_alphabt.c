#include <stdio.h>
/**
 *main - This program prints alphabets in lowercase, except 'q' and 'e'
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int s = 97, p = 122;

	while (s <= p)
	{
		if (s != 'q' && s != 'e')
			putchar(s);
	s++;
	}
putchar('\n');
return (0);
}
