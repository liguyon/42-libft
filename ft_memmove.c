/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:40:20 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/17 16:49:14 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src || !n)
		return (dest);
	if (dest > src && dest - src < (int)n)
	{
		i = n - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
		return (dest);
	}
	if (src > dest && src - dest < (int)n)
	{
		i = -1;
		while (++i < (int)n)
			((char *)dest)[i] = ((char *)src)[i];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <string.h>
int	main()
{
	char	src1[30] = "heehoohuu";
	char	src2[30] = "heehoohuu";
	char	*dest1 = src1 + 2;
	char	*dest2 = src2 + 2;
	size_t	n = 3;
	memmove(dest1, src1, n);
	ft_memmove(dest2, src2, n);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}
*/
