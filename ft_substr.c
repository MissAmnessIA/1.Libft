#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen (s);
	sub = (char *)malloc (len * sizeof(char));
	if (sub == NULL)
		return (NULL);
	s += start;
	sub = (char *)ft_memcpy(sub, s, len);
	return (sub);
}