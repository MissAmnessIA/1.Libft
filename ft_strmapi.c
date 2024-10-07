/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:16:59 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:26:20 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     index;

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