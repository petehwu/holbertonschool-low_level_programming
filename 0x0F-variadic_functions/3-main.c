#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'H', 0, "lberton");
    print_all("ceiss", 'H', 0, 0, "good?");
    print_all("xxxxxceisssxxx", 'H', 0, 0, "good?", 0);
    print_all("xx");
    print_all("sx", "");
    print_all(0);
    print_all(0, 'A', 0, 0, "YO");
    return (0);
}
