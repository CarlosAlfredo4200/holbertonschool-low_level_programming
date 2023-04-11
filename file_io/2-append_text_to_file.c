#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL, return -1
 * @text_content: content to append, if NULL, do not append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fnNewFile;
int size;
int w;
if (filename == NULL)
return (-1);
fnNewFile = open(filename, O_WRONLY | O_APPEND);
if (fnNewFile == -1)
return (-1);
if (text_content == NULL)
return (1);
for (size = 0; text_content[size]; size++)
;
w = write(fnNewFile, text_content, size);
close(fnNewFile);
return (w == -1 ? -1 : 1);
}
