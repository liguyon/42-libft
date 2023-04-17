/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:27:24 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/12 16:40:07 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!src && !dest)
		return (dest);
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest1[10] = "";
	char	dest2[10] = "";
	char	*src = "pipopu";
	int	n = 5;
	memcpy(dest1, src, n);
	ft_memcpy(dest2, src, n);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}
*/
