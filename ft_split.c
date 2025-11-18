#include "libft.h"
static int	countwords(char const *str, char sep)
{
	int	i;
	int	ccword;
	int	count;

	i = 0;
	ccword = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep)
			ccword = 0;
		else if (ccword == 0)
		{
			count++;
			ccword = 1;
		}
		i++;
	}
	return (count);
}

static int	wordlen(char const *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

static void	freewords(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
}

static int	fillwords(char **res, const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = wordlen(s, c);
			res[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (!res[i])
			{
				freewords(res, i);
				return (0);
			}
			ft_memcpy(res[i], s, len);
			res[i++][len] = '\0';
			s += len;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		cwords;
	char	**res;

	if (!s)
		return (NULL);
	cwords = countwords(s, c);
	res = (char **)malloc(sizeof(char *) * (cwords + 1));
	if (!res)
		return (NULL);
	if (!fillwords(res, s, c))
		return (NULL);
	return (res);
}