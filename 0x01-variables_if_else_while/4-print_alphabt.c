#include <stdio.h>
/**
 * main - Prints the alphabetic except e and q
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar (alph);
	}
	putchar('\n');
	return (0);
}

