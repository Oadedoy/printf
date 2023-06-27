#include "main.h"
/**
 * print_pointer - Prints a pointer
 * @args: list of arguments
 * Return: returns the total of characters printed
 */
int print_pointer(va_list args)
{
	char *ptr = va_arg(args, void *);

	return (print_hex(args));
}
