#include "main.h"
/**
 * print_pointer - Prints a pointer
 * @args: list of arguments
 * Return: returns the total of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int value = (unsigned long int)ptr;
	char map_to[] = "0123456789abcdef";
	int len = 0;

	len += _putchar('0');
	len += _putchar('X');

	if (value == 0)
		len += _putchar('0');
	else
	{
		unsigned long int new_value = value;

		while (new_value > 0)
		{
			int digit = new_value % 16;

			len += _putchar(map_to[digit]);
			new_value /= 16;
		}
	}
}
