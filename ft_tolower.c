int ft_tolower(int c)
{
    if (65 <= c && c <= 90)
    {
        c = c + 32;
        return(c);
    }
    return(0);
}

#include <stdio.h>

int main()
{
    char c;
    c = '@';
    printf("%c\n", ft_tolower(c));

    return(0);
}