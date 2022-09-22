#include <stdio.h>
/**
 * main - print from zero to ten using putchar method
 * staring from zero and inlcude new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + '0');
	}
	putchar ('\n');
	return (0);
}
