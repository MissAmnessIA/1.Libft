/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:56:18 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/09/23 23:12:27 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		num;
	char	*dup;

	num = ft_strlen(s);
	dup = (char *) malloc(num * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (*s != '\0')
	{
		*dup = *s;
		dup++;
		s++;
	}
	return (dup - num);
}
