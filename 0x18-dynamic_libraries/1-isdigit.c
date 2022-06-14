#include "main.h"

/**
 * _isdigit - Checks for a digit from 0 through 9.
 *
 * @c: The integer argument the function takes.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);

	return (0);
}
