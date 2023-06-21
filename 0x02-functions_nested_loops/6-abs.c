#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @num: The number to compute the asolute value of.
 *
 * Return: The absolute value of the inpute number.
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
