/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:02:32 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/09/26 07:17:48 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc (nmemb * size);
	ft_memset(ptr, 0, sizeof (ptr));
	if (nmemb == 0 || size == 0 || ptr == NULL)
		return (NULL);
	return (ptr);
}
