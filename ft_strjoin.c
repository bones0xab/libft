#include "libft.h"

char    *ft_strjoin(char const *pt1, char const *pt2)
{
    char *str;
    int lens1;
    int lens2;
    int len;

    if (!pt1 && !pt2)
		return (NULL);
	if (!pt1)
		return (ft_strdup(pt2));
	if (!pt2)
		return (ft_strdup(pt1));
	lens1 = ft_strlen(pt1);
	lens2 = ft_strlen(pt2);
	len = lens1 + lens2;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, pt1, lens1);
	ft_memcpy(str + lens1, pt2, lens2);
	return (str);
}