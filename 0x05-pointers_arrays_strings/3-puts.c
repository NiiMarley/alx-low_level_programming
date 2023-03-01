#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	while (str[i] != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
