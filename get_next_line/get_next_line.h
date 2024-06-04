#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // DELETE

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 8
#endif

char *get_next_line(int fd);
#endif