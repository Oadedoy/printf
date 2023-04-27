#include "main.h"
#include <stdio.h>
/**
 * print_octal - Prints an unsigned number in octal notation
 * @args: List of arguments
 * Return: Number of chars printed
 */
int print_octal(va_list args)
{
	unsigned int num;
	int i, n_len;
	char *str;
	char *r_str;
	int printed_chars = 0;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}
	if (num < 1)
		return (-1);
	n_len = base_len(num, 8);
	str = malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		str[i] = (num % 8) + '0';
		num = num / 8;
	}
	str[i] = '\0';
	r_str = rev_string(str);
	if (r_str == NULL)
		return (-1);
	printed_chars += write(1, r_str, n_len);
	free(str);
	free(r_str);
	return (printed_chars);
}

