#include <stdio.h>
#include "main.h"

/**
 * print_binary - Converts a number from decimal to binary
 * @args: List of arguments
 * Return: The length of the number printed
 */
int print_binary(va_list args)
{
	unsigned int num;
	int i, n_len;
	char *str;
	char *r_str;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	n_len = base_len(num, 2);
	str = malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	r_str = rev_string(str);
	if (r_str == NULL)
		return (-1);
	write_base(r_str);
	free(str);
	free(r_str);
	return (n_len);
}
