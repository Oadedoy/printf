#include "main.h"
/**
 * exclusive_string - print exclusuives string.
 * @args: list of argument.
 * Return: the length of the string.
 */

int exclusive_string(va_list args)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len += print_heX(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
