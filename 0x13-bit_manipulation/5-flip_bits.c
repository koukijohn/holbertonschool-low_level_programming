#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - Returns numofbits to flip to get from one numb to another.
 * @n: This is num we are comparing.
 * @m: This is num we are comparing.
 *
 * Return: numofbits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numofbits = 0;
	unsigned int counter = 0;/*This is for our loop*/
	unsigned long int flipper = n^m;/*num yuou get after n^m*/

	while (counter < 63)
	{
		if ((flipper & 1) == 1)/*num compares and == 1*/
			numofbits++; /*add 1 to numofbits flipped*/
		flipper = flipper >> 1;/* This is to count the next bit*/
		counter++;/*to count through every num in binary*/
	}
	return (numofbits);
}
