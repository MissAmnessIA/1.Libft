/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:16:55 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:26:39 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = (char *)malloc (len * sizeof(char));
	if (sub == NULL)
		return (NULL);
	s += start;
	sub = (char *)ft_memcpy(sub, s, len);
	return (sub);
}