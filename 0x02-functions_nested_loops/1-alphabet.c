#include "main.h"
/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if succesful
 */
void print_alphabet(void)
{
	char current_letter = 'a';

	while (current_letter <= 'z')

	{
		_putchar(current_letter);
		current_letter++;
	}
	_putchar('\n');

}
