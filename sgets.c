#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sgets(char *s, size_t size, FILE *stream)
{
    setbuf(stdin, NULL);
    fgets(s, size, stream);
    s[strcspn(s, "\n")] = '\0';
}
