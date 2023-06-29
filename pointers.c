#include "main.h"
/**
 * print_pointer - Prints a pointer
 * @args: list of arguments
 * Return: returns the total of characters printed
 */
void print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int value;

	if (ptr == NULL)
	{
		const char *nilString = "(nil)";

		while (*nilString != '\0')
		{
			_putchar(*nilString);
			nilString++;
		}
		return;
	}
	value = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	print_hex(args);
}
