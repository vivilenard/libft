typedef unsigned long size_t;

size_t strlen(const char *s)
{
    int i;

    while (s[i] != '\0')
    {
        i++;
    }
    return(i);
}

#include <stdio.h>

int main()
{
    size_t i;
    char s[] = "lalilu";
    i = strlen(s);
    printf("%zu\n", i);
    return(0);
}