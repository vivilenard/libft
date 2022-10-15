int ft_toupper(int c)
{
    if (97 <= c && c <= 122)
    {
        c = c - 32;
        return(c);
    }
    return(0);
}

#include <stdio.h>

int main()
{
    char c;
    c = 'P';
    printf("%c\n", ft_toupper(c));

    return(0);
}