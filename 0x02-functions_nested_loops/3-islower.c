#include "main.h"
/**
 * _islower -  checks for lowercase character.
 *  @c: the integer value it receive
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char current_letter;

	for (current_lowercase = 'a'; current_lowercase <= 'z'; current_lowercase++;)
	{
		if (c == current_lowercase)
			return (1);
	}
	return (0);
}
