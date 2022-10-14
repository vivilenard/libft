#include <stdio.h>
int isalpha(int c)
{
    if (((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)))
        return(1);
    else
        return(0);
}

int main()
{
    char c;
    c = '0';

    printf("%d", isalpha(c));
    return(0);
}