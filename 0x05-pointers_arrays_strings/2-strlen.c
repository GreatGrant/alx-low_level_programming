#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string to be checked
 * Return: int, the length of the string
 */
int _strlen(char *s)
{
	int lengthOfString = 0;

	while (s[i] != '\0')
	{
		lengthOfString++;
	}

	return lengthOfString;
}
