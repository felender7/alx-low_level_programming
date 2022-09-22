#include <stdio.h>
/**
 * main - print from a-z in reverse
 * staring from z-a and inlcude new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar (reverse);
	}
	putchar ('\n');
	return (0);
}
