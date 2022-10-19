#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char current_letter;
	const int LIMIT = 9;
	const char FINAL_LETTER = 'z';

	while (counter <= LIMIT)
	{
		for (current_letter = 'a' ; current_letter <= FINAL_LETTER; current_letter++)
		{
			_putchar(current_letter);
		}
	}

}
