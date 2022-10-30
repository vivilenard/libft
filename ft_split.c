#include "libft.h"

int ft_countc(char const *s, char c)
{
    int i;
    int c;
    i = 0;
    c = 0;
    while (s[i])
    {
        if (s[i] == c && i != 0)
            c++;
    }
    return (c);
}
char    **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  i2;
    size_t  n;
    int     flag;
    char *m[ft_countc(s, c) + 1];
    i = 0;
    n = 0;
    flag = 0;
    while (*(s + i) != '\0')
    { 
        if ((*s + i) == c && i != 0)
        {
            i2 = 0;
            m[n] = malloc((i - flag + 1) * sizeof(char));
            while(flag < i)
            {
                m[n][i2] = s[flag];
                i2++;
                flag++;
            }
            m[n][i2] = '\0';
            flag = i;
            n++;
            if (s[i] == '\0')
                return (m);
        }
    }
}