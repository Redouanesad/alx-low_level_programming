#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *	should be printed
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= postn; j++)
			{
				if (i == j)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
