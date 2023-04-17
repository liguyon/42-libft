/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:37:11 by liguyon           #+#    #+#             */
/*   Updated: 2023/04/17 15:46:46 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str, int len)
{
	int		i;
	int		j;
	char	tmp;

	if (str)
	{
		i = -1;
		j = len - 1;
		while (++i < len / 2)
		{
			tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
			j--;
		}
	}
}

int	itoa_len(int n)
{
	int		itoa_len;
	long	nb;

	if (n == 0)
		return (1);
	itoa_len = 0;
	nb = (long)n;
	if (nb < 0)
	{
		itoa_len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		itoa_len++;
	}
	return (itoa_len);
}

void	itoa_alt(int n, int len, char *res)
{
	long	nb;
	int		i;

	res[len] = '\0';
	nb = (long)n;
	if (nb < 0)
	{
		nb *= -1;
		res[len - 1] = '-';
	}
	i = -1;
	while (nb > 0)
	{
		res[++i] = nb % 10 + '0';
		nb /= 10;
	}
	ft_strrev(res, len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = itoa_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (!n)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	itoa_alt(n, len, res);
	return (res);
}
