/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:08:01 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 22:08:05 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	get_int_len(int num, int isnegative)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	if (isnegative)
		len++;
	return (len);
}

char	*convert(int i, int numtocovert, int isnegative)
{
	char	*converted;

	converted = (char *)malloc((i + 1) * sizeof(char));
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
	int		len_n;
	char	*n_str;
	int		neg;

	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	if (n == 0)
		len_n = 1;
	else
		len_n = get_int_len(n, neg);
	n_str = convert(len_n, n, neg);
	return (n_str);
}
