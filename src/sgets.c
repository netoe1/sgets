#ifndef SGETS_C
#define SGETS_C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/sgets.h"
void clearBuffers()
{
    fseek(stdin, 0, SEEK_END);
}
static void __validstr(const char *s)
{
    if (s == NULL || s[0] == '\0')
    {
        fprintf(stderr, "Error: Invalid str, risk of memory leaks!");
    }
}
void sgets_file(char *s, size_t size, FILE *stream)
{

    __validstr(s);
    if (stream == NULL)
    {
        fprintf(stderr, "Error: File stream shouldn't be NULL!\n");
        return;
    }

    if (size <= 0)
    {
        fprintf(stderr, "Error: Effective size cannot be less than 0!\n");
        return;
    }

    if (size > sizeof(s))
    {
        fprintf(stderr, "Effective size cannot be greater than real size ones!\n");
        return;
    }

    setbuf(stdin, NULL);
    fgets(s, size, stream);
    s[strcspn(s, "\n")] = '\0';
}

void sgets(char *s, size_t size)
{
    FILE *stream = stdin;

    __validstr(s);
    if (stream == NULL)
    {
        fprintf(stderr, "Error: File stream shouldn't be NULL!\n");
        return;
    }

    if (size <= 0)
    {
        fprintf(stderr, "Error: Effective size cannot be less than 0!\n");
        return;
    }

    if (size > sizeof(s))
    {
        fprintf(stderr, "Effective size cannot be greater than real size ones!\n");
        return;
    }

    setbuf(stdin, NULL);
    fgets(s, size, stream);
    s[strcspn(s, "\n")] = '\0';
}
#endif