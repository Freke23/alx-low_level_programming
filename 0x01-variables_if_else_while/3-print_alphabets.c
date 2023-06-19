#include <stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char alp[56] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 56; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
