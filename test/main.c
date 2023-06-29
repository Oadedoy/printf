#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int number = 42;
    int *ptr = &number;
    
    _printf("%b\n", 98);
    print_pointer(ptr);
    return (0);
}
