#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
  char *buffer;
  ssize_t fnNewFile;
  ssize_t w;
  ssize_t t;

  fnNewFile = open(filename, O_RDONLY);
  if (fnNewFile == -1)
    return (0);
  buffer = malloc(sizeof(char) * letters);
  t = read(fnNewFile, buffer, letters);
  w = write(STDOUT_FILENO, buffer, t);

  free(buffer);
  close(fnNewFile);
  return (w);
}
