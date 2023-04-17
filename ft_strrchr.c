/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:05:58 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/11 12:50:23 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	c = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	if (c == '\0')
		return (&str[i]);
	while (i--)
	{
		if (str[i] == c)
			return (&str[i]);
	}
	return (NULL);
}
