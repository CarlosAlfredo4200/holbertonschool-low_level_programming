#include "hash_tables.h"
/**
 *  * hash_djb2 - Hash function, takes a string and turns it into a hash number
 *   * @str: the string, a constant value unrepeated in the hash table
 *    *
 *     * Return: The hash number
 *      */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;
while ((c = *str++) != 0)
		{
				hash = ((hash << 5) + hash) + c;
}
return (hash);
