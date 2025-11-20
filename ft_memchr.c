# include "libft.h"

void     *ft_memchr(const    void *p, int c, size_t n)
{
    const   unsigned char*pt1;
    size_t i;

    pt1 = (unsigned char *)p;

    i = 0;

    while (i < n)
    {
        if ( pt1[i] == (unsigned char)c)
            return ((void *) &pt1[i]);
        i++;
    }
    
    return (NULL);
}