

#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 *  @s: address to memory block
 *  @b: char to be used
 *  @n: number of bytes to be used
 *  Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i(0);
		while (n > 0)
		{
			s[i] = b;
			i++;
			n--;
		}
	return (s);
}
