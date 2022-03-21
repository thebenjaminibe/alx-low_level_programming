#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: array.
 */

void puts2(char *str)
{
	int len = 0;
	int z;

	while (str[len] != 0)
	{
		len++;
	}
	for (z = 0; z < len; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
