#include "unistd.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed a new line.
 */
void print_numbers(void)
{
	chat num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_purchar('\n');
}
