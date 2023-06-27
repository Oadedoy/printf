#include "main.h"
/**
 * print_reversed - prints a reversed string
 * @args: list of arguments
 * Return: the reversed string
 */
int print_reversed(va_list args)
{
	int length;
	char *string;
	char *ptr;

	string = va_arg(args, char *);
	ptr = rev_string(string);
	if (string == NULL || ptr == NULL)
		return (-1);
	for (length = 0; ptr[length] != '\0'; length++)
		_putchar(ptr[length]);
	free(ptr);
	return (length);
}
