/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <ligyuon@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:39:26 by liguyon           #+#    #+#             */
/*   Updated: 2023/07/10 17:54:54 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logger_internal.h"
#include "libft.h"

void	logger_orgn(char *file, int line)
{
	ft_printf("  --> %s:%d\n", file, line);
}

void	logger_debg(char *msg)
{
	ft_printf(ANSI_BWHT "[DEBG]" ANSI_RESET " %s\n", msg);
}

void	logger_info(char *msg)
{
	ft_printf(ANSI_BBLU "[INFO]" ANSI_RESET " %s\n", msg);
}
