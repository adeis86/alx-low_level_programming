#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints a string, followed by a new line, to stdout
 * @str: pointer parameter
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
