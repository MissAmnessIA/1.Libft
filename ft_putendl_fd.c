/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:23:30 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:25:49 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len_s;

	len_s = ft_strlen(s) + 1;
	write (fd, &s, len_s);
	write (fd, "\n", 1);
}