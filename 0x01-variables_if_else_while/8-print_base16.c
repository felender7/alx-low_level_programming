#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * staring from zero and inlcude new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int ch;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
