#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
	char text[9] = "_putchar";
        int i;

	for (i = 0 ; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
