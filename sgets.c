#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clearBuffers()
{
    fseek(stdin, 0, SEEK_END);
}

void sgets(char *s, size_t size, FILE *stream)
{
    if (s == NULL)
    {
        fprintf(stderr, "Error: char *s pointer must be != than NULL!\n");
        return;
    }

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

    fgets(s, size, stream);
    s[strcspn(s, "\n")] = '\0';
}
