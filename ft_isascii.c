#include <stdio.h>

int ft_isascii(int c)
{
    if (0 <= c && c <= 127)
        return(1);
    else 
        return(0);
}
int main()
{
    char c;
    c = ';';
    int i;
    i = 145;

    printf("%d\n", ft_isascii(i));
    return(0);
}