#include "main.h"

/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char text[9] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(text[i]);
		}
		_putchar('\n');
	return (0);
}
