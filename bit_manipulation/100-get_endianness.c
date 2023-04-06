#include "main.h"
/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */
int get_endianness(void) {
  int i = 1;
  char *p = (char *)&i;
  return (*p == 1);
}
