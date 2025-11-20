#include "libft.h"

char	*ft_strmapi(char const *s, char (*fct)(unsigned int, char))
{
    int		len;
	int		j;
	char	*res;

	j = 0;
	if (!s || !fct)
		return (NULL);
	len = ft_strlen(s);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (j < len)
	{
		res[j] = (*fct)(j, s[j]);
		j++;
	}
	return (res);
}