# include "libft.h"

void    *ft_memset(void *s, int b, size_t n)
{
    unsigned    char *t;

    t = (unsigned   char *)s;

    while(n > 0)
    {
        *t = (unsigned  char)b;
        t++;
        n--;
    }
    return (s);
}