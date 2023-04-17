/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:16:58 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/12 23:22:08 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return ((unsigned int)ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
	char	*src1 = "hello world";
	char	*l_dest1 = malloc(sizeof(char) * (1 + ft_strlen(src1)));
	char	*m_dest1 = malloc(sizeof(char) * (1 + ft_strlen(src1)));
	printf("lib: len= %d | str= %s\n",
		strlcpy(l_dest1, src1, ft_strlen(src1)), l_dest1);
	printf("my : len= %d | str= %s\n",
	ft_strlcpy(m_dest1, src1, ft_strlen(src1)), m_dest1);
	return (0);
}
*/
