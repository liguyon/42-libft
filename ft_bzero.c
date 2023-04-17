/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:20:15 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/17 16:24:14 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n)
	{
		while (i < n)
		{
			((char *)s)[i] = '\0';
			i++;
		}
	}
}
/*
#include <stdio.h>
#include <strings.h>
int	main()
{
	char	s1[10] = "test";
	char	s2[10] = "test";
	bzero(s1, 10);
	ft_bzero(s2, 10);
	printf("%s\n", s1);
	printf("%s\n", s2);
}
*/
