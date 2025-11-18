void    ft_bzero(void *p, size_t n)
{
    unsigned char   *t;

    t = (unsigned char  *)p;

    while(n > 0)
    {
        *t = 0;
        t++;
        n--;
    }     
}