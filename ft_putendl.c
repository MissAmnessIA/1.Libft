#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len_s;

	len_s = ft_strlen(s) + 1;
	write (fd, &s, len_s);
	write (fd, "\n", 1);
}