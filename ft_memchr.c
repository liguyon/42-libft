/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:41:02 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/17 15:44:44 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*res;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			res = &(((unsigned char *)s)[i]);
			return ((void *)res);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	const char *s = "";
	char c = 'y';
	size_t n = 60;
	printf("%s\n", (char *)memchr(s, c, n));
	printf("%s\n", (char *)ft_memchr(s, c, n));
}
*/
