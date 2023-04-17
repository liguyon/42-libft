/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:11:46 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/12 16:18:00 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = c;
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	s[12] = "Hell no";
	char	c = 'p';
	size_t	n = 11;
	printf("%s\n", (char *)memset(s, c, n));
	printf("%s\n", (char *)ft_memset(s, c, n));
}
*/
