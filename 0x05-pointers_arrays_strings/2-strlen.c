#include "main.h"
#include <stdio.h>

/**
 * int _strlen - a function that returns the length of a string
 * @s: string to be supplied
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
