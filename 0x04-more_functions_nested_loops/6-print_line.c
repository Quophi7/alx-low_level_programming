#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Number of lines to be printed
 * Return: Always 0
 */

void print_line(int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
