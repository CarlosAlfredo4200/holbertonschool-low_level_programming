#include "main.h"
/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m) {
  unsigned int count = 0;
  unsigned long int xor_result = n ^ m;
  
  while (xor_result > 0) {
    count += xor_result & 1;
    xor_result >>= 1;
  }
  return (count);
}
