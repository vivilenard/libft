#include <stdio.h>
int isalnum(int c)
{
    if (((48 <= c) && (c <= 57)) || ((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)))
        return(1);
    else
        return(0);
}

int main()
{
    char c;
    c = 'Z';

    printf("%d\n", isalnum(c));
    return(0);
}