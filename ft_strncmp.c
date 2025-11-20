# include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;


    i = 0;
    if(n == 0)
        return (0);
    n--;

    while ((unsigned char)str1[i] == (unsigned char)str2[i] && str1[i] && str2[i] && n > 0)
    {
        n--;
        i++;
    }

    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}