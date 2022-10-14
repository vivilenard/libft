#include <stdio.h>

char *ft_strlcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int main()
{
    char src = "hihihi";
    char dest = "la";
    printf("%s", ft_strlcpy(dest, src));
    return (0);
}