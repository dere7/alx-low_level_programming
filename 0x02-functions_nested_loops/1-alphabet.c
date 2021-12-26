#include "holberton.h"

/**
 *  print_alphabet - prints alphabets
 *  Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
