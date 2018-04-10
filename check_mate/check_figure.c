/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_figure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:29:14 by exam              #+#    #+#             */
/*   Updated: 2018/04/06 15:29:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_rook(char **board, int ar_i, int i)
{
	if (check_hor(board, ar_i, i) == 1)
		return (1);
	else if (check_ver(board, ar_i, i) == 1)
		return (1);
	return (0);
}

int		check_bishop(char **board, int ar_i, int i)
{
	if (check_ldiag(board, ar_i, i) == 1)
		return (1);
	else if (check_rdiag(board, ar_i, i) == 1)
		return (1);
	return (0);
}

int		check_pawn(char **board, int ar_i, int i)
{
	if (ar_i == 1)
		return (0);
	else
	{
		if (board[ar_i - 1][i - 1] == 'K')
		{
			write(1, "Success\n", 8);
			return (1);
		}
		else if (board[ar_i - 1][i + 1] == 'K')
		{
			write(1, "Success\n", 8);
			return (1);
		}
		return (0);
	}
}

int		check_queen(char **board, int ar_i, int i)
{
	if (check_hor(board, ar_i, i) == 1)
		return (1);
	else if (check_ver(board, ar_i, i) == 1)
		return (1);
	else if (check_ldiag(board, ar_i, i) == 1)
		return (1);
	else if (check_rdiag(board, ar_i, i) == 1)
		return (1);
	return (0);
}
