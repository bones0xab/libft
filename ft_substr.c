#include "libft.h"

char    *ft_substr(const char *s, unsigned int start , size_t len)
{
    size_t i;
    size_t slen;
    char    *str;

    i = 0;
    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)
        return (ft_strdup(""));
    if (len > slen - start)
		len = slen - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);


}