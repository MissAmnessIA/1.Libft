/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:08:01 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/08 00:58:19 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

long	get_int_len(long num, int isnegative)
{
	long	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	if (isnegative)
		len++;
	return (len);
}

char	*convert(long i, long numtocovert, int isnegative)
{
	char	*converted;

	converted = (char *)malloc(i + 1);
	if (!converted)
		return(NULL);
	converted[i] = '\0';
	while (isnegative <= i)
	{
		converted[i - 1] = ((numtocovert % 10) + 48);
		numtocovert /= 10;
		i--;
	}
	if (isnegative)
		converted[0] = '-';
	return (converted);
}

char	*ft_itoa(int n)
{
	long		len_n;
	char		*n_str;
	int			neg;
	long		cpi;

	cpi = (long)n;
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	len_n = get_int_len(cpi, neg);
	n_str = convert(len_n, cpi, neg);
	return (n_str);
}
