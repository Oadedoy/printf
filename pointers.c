#include "main.h"
/**
 * print_pointer - Prints a pointer
 * @args: list of arguments
 * Return: returns the total of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr;
	char *string = "(nil)";
	int i; int numDigits;
	long int value;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}
		return (i);
	}

	value = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	numDigits = print_hex(value);
	return(numDigits + 2);
}
