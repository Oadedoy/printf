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
int print_hexa(va_list types, char map_to[]);
/**
 * print_hexadecimal - Converts a number from decimal to hexadecimal
 * @args: List of arguments
 * Return: The length of the number printed
 */
int print_hexadecimal(va_list args)
{
	unsigned int num;
	int i, n_len;
	char *str;
	char *r_str;
	const char *hex_chars = "0123456789abcdef";

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	n_len = base_len(num, 16);
	str = malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		str[i] = hex_chars[num % 16];
		num = num / 16;
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
/**
 * print_hexa_upper - Prints a number in uppercase hexadecimal notation
 * @args: List of arguments
 * Return: The length of the number printed
 */
#define BUFF_SIZE 1024
int print_hexa_upper(va_list args)
{
	return (print_hexa(args, "0123456789ABCDEF"));
}
/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: Lista of arguments
 * @map_to: Array of values to map the number to
 * Return: Number of chars printed
 */
int print_hexa(va_list types, char map_to[])
{
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int temp_num = num;
	int len = 0;
	int i = 0;
	int j;
	char hex_buffer[BUFF_SIZE];

	while (temp_num > 0)
	{
		hex_buffer[i++] = map_to[temp_num % 16];
		temp_num /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex_buffer[j]);
		len++;
	}

	return (len);
}
