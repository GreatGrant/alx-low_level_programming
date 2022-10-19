#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if succesful
 */
int main(void)
{
	char current_letter = 'a';

	while (current_letter <= 'z')

	{
		_putchar(current_letter);
		current_letter++;
	}
	_putchar('\n');

}
