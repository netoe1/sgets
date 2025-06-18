#ifndef SGETS_H
#define SGETS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clearBuffers();                                 // A way to clear buffers using fseek() in a binary way.
void sgets_file(char *s, size_t size, FILE *stream); // Implementation of sgets()!
void sgets(char *s, size_t size);                    // sgets for stdin!
#endif
