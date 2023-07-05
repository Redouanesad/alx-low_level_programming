#include "main.h"

/**
 * factoriel - finds factoriel
 * @n: int
 * Return: int
*/

int factoriel(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factoriel(n - 1));
}
