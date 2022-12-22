#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to a character that will be changed
 * @src: pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
