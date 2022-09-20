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
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar (alp);
		putchar ('\n');
	}
	return (0);
}

