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
	int i;

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
	for (i = (sizeof(void *) * 2) - 1; i >= 0; i--)
	{
	unsigned long int digitValue = (value >> (4 * i)) & 0xF;

	if (digitValue < 10)
	{
		_putchar('0' + digitValue);
	}
	else
	{
		_putchar('A' + digitValue - 10);
	}
	}
}
