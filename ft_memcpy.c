void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned    char *dst_t;
    unsigned    char *src_t;

    if(dest == src || !n)
        return(dest);

    if(!dest && !src)
        return (NULL);


    dst_t = (unsigned char *)dest;
    src_t = (unsigned char *)src;
    
    i = 0;
    while(i < n)
    {
        dst_t[i] = src_t[i];
        i++;
    }

    return (dst_t);
}