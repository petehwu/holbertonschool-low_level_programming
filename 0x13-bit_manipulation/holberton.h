#ifndef __HOLBERTON_H_
#define __HOLBERTON_H_

/**
 * _putchar - prints one character
 * @c: character to print
 * Return: 1 if successful or -1 if no
 */
int _putchar(char c);

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary representation of number
 * Return: converted integer or 0 if invalid string
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n);

/**
 * get_bit - returns bit value at given index
 * @n: number
 * @index: index position to get
 * Return: bit value at given position
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - sets bit value to 1 at given index
 * @n: number
 * @index: index position to set
 * Return: 1 if successful -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - cleas bit at given index
 * @n: number
 * @index: index position to cler
 * Return: 1 if successful -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - find number of bits need to flip to get value
 * @n: from number
 * @m: to number
 * Return: number of bits that needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_val - gets integer value based on binary position
 * @digits: index position of value
 * Return: numeric value
 */
unsigned int get_val(int digits);

/**
 * get_endianness - finds if system is bie endian or little endian
 * Return: 0 if bi endian, 1 if little endian
 */
int get_endianness(void);
#endif
