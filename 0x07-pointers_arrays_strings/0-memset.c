#include "main.h"
#include<stdio.h>


/**
 *
 *  * _memset - Fills the first n bytes of the memory area
 *
 *   *          pointed to by @s with the constant byte @c.
 *
 *    * @s: A pointer to the memory area to be filled.
 *
 *     * @c: The character to fill the memory area with.
 *
 *      * @n: The number of bytes to be filled.
 *
 *       * description _memset: over there
 *
 *        *
 *
 *         * Return: A pointer to the filled memory area @s.
 *
 *          * _memset - fills a memory block with a constant byte
 *
 *           * @s: address to memory block
 *
 *            * @b: char to be used
 *
 *             * @n: number of bytes to be used
 *
 *              *
 *
 *               * Return: pointer to the memory block
 *
 *                */

void *_memset(void *s, int c, size_t n)

{

		unsigned int index;

			unsigned char *memory = s, value = c;



				for (index = 0; index < n; index++)

							memory[index] = value;



					return (memory);

					char *_memset(char *s, char b, unsigned int n)

					{

							while (n)

									{

												s[n - 1] = b;

														n--;

															}

								return (s);

					}
