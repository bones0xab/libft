#include "libft.h"

void	ft_striteri(char *s, void (*fct)(unsigned int, char*))
{
    unsigned int	j;

	j = 0;
	if (!s || !fct)
		return ;
	while (s[j])
	{
		(*fct)(j, &s[j]);
		j++;
	}
}