#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *str;
    int slen;
    int i;

    i = 0;
    slen = ft_strlen(s1);
    str = (char *)malloc(sizeof(char) * slen +1);
    if(!str)
        return (NULL);
    while (i < slen)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}