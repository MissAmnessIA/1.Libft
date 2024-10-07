/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:17:02 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:25:53 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void    ft_putnbr_fd (int n, int fd)
{
    char *num;
    int size;

    num = ft_itoa(n);
    size = ft_strlen(num);
    write (fd, num, size);
}