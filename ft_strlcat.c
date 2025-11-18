#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t  slen;
    size_t j;

    j = 0;
    slen = ft_strlen(src);
    if(dstsize == 0)
        return (slen);
    dlen = ft_strlen(dst);
    if (dstsize <= dlen)
        return (dstsize + slen);
    while (src[j] && j < dstsize - dlen -1)
    {
        dst[dlen + j] = src[j];
        j++;
    }
    dst[dlen + j] = '\0';
    return (dlen + slen);
}