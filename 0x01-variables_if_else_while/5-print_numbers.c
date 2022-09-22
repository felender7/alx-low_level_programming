#include <stdio.h>
/**
 * main - print from zero to ten
 * staring from zero and inlcude new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar ('\n');
	return (0);
}
