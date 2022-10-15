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