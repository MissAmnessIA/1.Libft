/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <vmesa-ke@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:56:18 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/10/07 21:26:07 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/



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
