/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:02:32 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:25:27 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc (nmemb * size);
	ft_memset(ptr, 0, sizeof (ptr));
	if (nmemb == 0 || size == 0 || ptr == NULL)
		return (NULL);
	return (ptr);
}
