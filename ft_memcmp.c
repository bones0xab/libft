# include "libft.h"

int     ft_memcmp(const   void  *a,const   void *b, size_t n)
{
    size_t  i;
    const unsigned char *pt1;
    const unsigned char *pt2;


    pt1 = (unsigned char *)a;
    pt2 = (unsigned char *)b;
    i = 0;

    while (i < n)
    {
        if(pt1[i] != pt2[i])
            return (pt1[i] - pt2[i]);
        i++;
    }
    return (0);
}