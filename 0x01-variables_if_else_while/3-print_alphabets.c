#include <stdio.h>
/**
 * main - print alphabet from A-z
 *
 * description: print a-z in lower case
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar (alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar (alph);
	putchar('\n');
	return (0);
}
