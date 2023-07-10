/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liguyon <ligyuon@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:55:01 by liguyon           #+#    #+#             */
/*   Updated: 2023/07/10 18:03:06 by liguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logger_internal.h"
#include "libft.h"

void	logger_warn(char *msg)
{
	ft_printf(ANSI_BYEL "[WARN]" ANSI_RESET " %s\n", msg);
}

void	logger_erro(char *msg)
{
	ft_printf(ANSI_BMAG "[ERRO]" ANSI_RESET " %s\n", msg);
}

void	logger_crit(char *msg)
{
	ft_printf(ANSI_BRED "[CRIT]" ANSI_RESET " %s\n", msg);
}