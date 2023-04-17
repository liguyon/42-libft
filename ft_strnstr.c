/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:01:18 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/17 15:07:11 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (!little[0])
		return ((char *)big);
	if (!len)
		return (NULL);
	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && i + little_len <= len)
	{
		if (!ft_strncmp(&big[i], little, little_len))
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	const char	*big = NULL;
	const char	*little = NULL;
	size_t		len = 8;
	printf("%s\n", strnstr(big, little, len));
	printf("%s\n", ft_strnstr(big, little, len));
}
*/
