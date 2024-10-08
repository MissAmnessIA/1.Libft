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
#include <stdio.h>


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

char	*convert(long i, int numtocovert, int isnegative)
{
	char	*converted;

	converted = (char *)malloc((i + 1) * sizeof(char));
	if (!converted)
		return (NULL);
	if (i == 0)
	{
		converted[0] = '0';
		converted[1] = '\0';
	}
	else{
		converted[i] = '\0';
		while (isnegative <= i)
		{
			converted[i - 1] = ((numtocovert % 10) + 48);
			numtocovert /= 10;
			i--;
		}
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
	if (n == 2147483647){
		n_str = (char *)malloc(11);
		if(n_str == NULL)
			return (NULL);
		n_str = "2147483647";
	}
	else if (n == -2147483648){
		n_str = (char *)malloc(12);
		if (n_str == NULL)
			return(NULL);
		n_str = "-2147483648";
	}			
	else{		
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
	}
	
	return (n_str);
}
int main(void)
{
	long n = 0;
	char *c = ft_itoa(n);


	printf ("Mi lib: %s \n", c);
	printf("Size: %zu", ft_strlen(c));
	return(0);
}