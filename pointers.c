/**
 * print_pointer - Prints a pointer
 * @args: list of arguments
 * Return: returns the total of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long long int value = (unsigned long long int)ptr;

	return (print_hexa(value));
}
