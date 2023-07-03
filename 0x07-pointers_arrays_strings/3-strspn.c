#include "main.h"

/**
 * _strpn - function that gets the length of a prefix substing
 * @s: string
 * @accept: bytes
 * Return: insigned int
*/

unsigned int _strpn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr] ; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
