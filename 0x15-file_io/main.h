#ifndef fileio
#define fileio

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
