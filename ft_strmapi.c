#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     index;
    int     i;

    index = 0;
    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    while (s[index])
    {
        str[index] = f(index, s[index]);
        index++;
    }
    str[index] = '\0';
    return (str);
}