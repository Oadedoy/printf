#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int main(void)
{
    unsigned int num1 = 123;
    unsigned int num2 = 456;
    unsigned int num3 = 789;

    printf("octal: ");
    print_octal(num1);

    printf("\nhexadecimal: ");
    print_hexadecimal(num2);

    printf("\nuppercase hexadecimal: ");
    print_hexa_upper(num3);

    printf("\nlowercase hexadecimal: ");
    print_hexa(num1);

    printf("\n");

    return (0);
}
