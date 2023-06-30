#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    const char* input_str = "Hello, \x07World!\x1F";
    print_exclusive_string("Formatted string: %S\n", input_str);
    
    return (0);
}
