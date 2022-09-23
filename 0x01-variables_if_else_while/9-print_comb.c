#include <stdio.h>
/**
 * main - print alll posible combination of single digits
 * numbers should be in ascending order
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar (n + '0');
		n++;
		if (n < 10)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
