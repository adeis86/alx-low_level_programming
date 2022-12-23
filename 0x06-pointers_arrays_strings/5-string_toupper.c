#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 * @wrd: pointer to string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *wrd)
{
	int length;

	length = 0;

	while (wrd[length] != '\0')
	{
		if (wrd[length] >= 97 && wrd[length] <= 122)
		{
			wrd[length] = wrd[length] - 32;
		}
		legnth++;
	}
	return (wrd);
}
