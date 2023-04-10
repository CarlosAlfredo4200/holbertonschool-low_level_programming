#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char *buffer = (char *) malloc(letters);
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    size_t nread = fread(buffer, sizeof(char), letters, file);
    if (nread == 0) {
        fclose(file);
        free(buffer);
        return 0;
    }

    ssize_t nwritten = write(STDOUT_FILENO, buffer, nread);
    if (nwritten == -1 || (size_t) nwritten != nread) {
        fclose(file);
        free(buffer);
        return 0;
    }

    fclose(file);
    free(buffer);
    return nwritten;
}

