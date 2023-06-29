#include "main.h"

/**
 * _strncpy - A fonction that copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: most number of bytes from @src
 *
 * Return: pointer to resulting string @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no null bytes
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = o; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is last than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
