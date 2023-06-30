#include "main.h"
#include <stdio.h>

/**
 * isLower - determinates whether ascii is lowercase
 * @c: character
 * Return:1 if true, 0 if false
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determinates whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0if false
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalazes every word of a string
 * @s: string to modify
 *
 * Return: the resulting string
*/
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foumdDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);

}
