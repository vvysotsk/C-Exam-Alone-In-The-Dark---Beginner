/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:30:10 by exam              #+#    #+#             */
/*   Updated: 2018/04/06 15:42:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_hor(char **board, int	ar_i, int i)
{
	i = 0;
	while (board[ar_i][i])
	{
		if (board[ar_i][i] == 'K')
		{
			write (1, "Success\n", 8);
			return (1);
		}
		i++;
	}
	return (0);
}

int		check_ver(char **board, int ar_i, int i)
{
	ar_i = 1;
	while (board[ar_i])
	{
		if (board[ar_i][i] == 'K')
		{
			write(1, "Success\n", 8);
			return (1);
		}
		ar_i++;
	}
	return (0);
}

int		check_ldiag(char **board, int ar_i, int i)
{
	while (ar_i > 1 && i > 0)
	{
		ar_i--;
		i--;
	}
	while (board[ar_i] && board[ar_i][i])
	{
		if (board[ar_i][i] == 'K')
		{
			write(1, "Success\n", 8);
			return (1);
		}
		ar_i++;
		i++;
	}
	return (0);
}

int		check_rdiag(char **board, int ar_i, int i)
{
	i = 0;
	while (board[ar_i + 1] && i > 0)
	{	
		ar_i++;
		i--;
	}
	while (ar_i != 1 && board[ar_i][i])
	{
		if (board[ar_i][i] == 'K')
		{
			write(1, "Success\n", 8);
			return (1);
		}
		ar_i--;
		i++;
	}
	return (0);
}
