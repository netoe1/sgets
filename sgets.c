#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void sgets(char *s, size_t size, FILE *stream)
{
    if (s == NULL || stream == NULL || size == 0)
    {
        fprintf(stderr, "Error: Invalid parameters, please check!\n");
        return;
    }
    setbuf(stdin, NULL);
    fgets(s, size, stream);
    s[strcspn(s, "\n")] = '\0';
}
