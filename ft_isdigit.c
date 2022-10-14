#include <stdio.h>

int ft_isdigit(int c)
{
    if (48 <= c && c <= 57)
        return(1);
    else 
        return(0);
}
int main()
{
    char c;
    c = '8';

    printf("%d\n", ft_isdigit(c));
    return(0);
}