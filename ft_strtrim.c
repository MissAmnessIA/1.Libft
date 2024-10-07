/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:05:35 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 22:06:06 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start;
	const char	*fin;
	char		*trim;
	size_t		size_s1;
	size_t		size_trim;

	size_s1 = ft_strlen (s1);
	start = s1;
	fin = (s1 + size_s1) - 1;
	while (check_set(set, *start) && *start)
		start ++;
	while (check_set(set, *fin) && fin > start)
		fin--;
	size_trim = (fin - start) + 1;
	trim = (char *)malloc ((size_trim + 1) * sizeof(char));
	while (start <= fin)
	{
		*trim = *start;
		trim++;
		start++;
	}
	*trim = '\0';
	trim -= size_trim;
	return (trim);
}
