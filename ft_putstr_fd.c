#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
    int j;

    j = 0;
    if(!s)
        return ;
    while (s[j])
    {
        write(fd, &s[j], 1);
		j++;
    }
}