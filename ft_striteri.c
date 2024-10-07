/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:23:50 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:23:51 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    index;

    index = 0;
    while (s[index])
    {
        f(index, s);
        index++;
    }
}