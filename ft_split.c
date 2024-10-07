/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:09:00 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 22:09:05 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	elem_len(const char *str, char c)
{
	int	countchr;

	countchr = 0;
	while (*str != c && *str != '\0')
	{
		countchr++;
		str++;
	}
	return (countchr);
}

size_t	numofargc(const char *str, char c)
{
	int	countarg;

	while (*str)
	{
		if (*str == c)
		{
			while (*str == c)
				str++;
			countarg++;
		}
		str++;
	}
	countarg++;
	return (countarg);
}

char	*strcopy(const char *s, char c, char *parray, size_t size)
{
	int	i;

	i = 0;
	parray = (char *)malloc((size + 1) * sizeof(char));
	if (parray == NULL)
		return (NULL);
	while (*s != c && *s != '\0')
	{
		parray[i] = *s;
		i++;
		s++;
	}
	parray[i] = '\0';
	return (parray);
}

char	*strtrim(const char *s1, char c)
{
	const char	*start;
	const char	*fin;
	char		*trim;
	size_t		size_s1;
	size_t		size_trim;

	size_s1 = ft_strlen (s1);
	start = s1;
	fin = (s1 + size_s1) - 1;
	while (*start == c && *start)
		start ++;
	while (*fin == c && fin > start)
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

char	**ft_split(char const *s, char c)
{
	size_t	lenarg;
	char	**parray;
	int		index_array;

	index_array = 0;
	s = strtrim(s, c);
	parray = (char **)malloc((numofargc(s, c) + 1) * sizeof(char *));
	if (parray == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			lenarg = elem_len(s, c);
			parray[index_array] = strcopy(s, c, parray[index_array], lenarg);
			s += lenarg;
			index_array++;
		}
		while (*s == c)
			s++;
	}
	parray[index_array] = NULL;
	return (parray);
}
