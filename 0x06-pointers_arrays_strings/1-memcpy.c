#include "holberton.h"

/**
 * *_memcpy - This is a function that copies the memory area.
 * @dest: This is our string that we will copy to.
 * @src: This is our string that we will copy from
 * @n: This is the size of our array.
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	unsigned int temp;

	while (x < n)
	{
		temp = src[x];
		dest[x] = temp;
		x++;
	}
	return (dest);
}
