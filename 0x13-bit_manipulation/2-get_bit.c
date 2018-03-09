#include "stdio.h"
#include "stdlib.h"
#include "holberton.h"

/**
 * get_bit - This returns value of bit at given index.
 * @n: This is our number
 * @index: This is ow we count through our bits.
 *
 * Return: int.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)/*64-bit architechture machines, hard-coding*/
		return (-1);/* return -1 for error*/
	return ((n >> index) & 1); /*shift right by index, &1 converts binary*/
}
