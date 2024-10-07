#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*str;

	s1_len = ft_strlen (s1);
	s2_len = ft_strlen (s2);
	total_len = s1_len + s2_len;
	str = (char *)malloc (total_len * sizeof (char));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*str = *s2;
		str++;
		s2++;
	}
	return (str - total_len);
}