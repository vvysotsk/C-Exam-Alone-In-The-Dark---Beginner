/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:34:10 by exam              #+#    #+#             */
/*   Updated: 2018/04/06 15:58:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_mate(char **board, int ar_i)
{
	int	i;

	while (board[ar_i])
	{
		i = 0;
		while (board[ar_i][i])
		{
			if (board[ar_i][i] == 'R' || board[ar_i][i] == 'Q' ||\
				board[ar_i][i] == 'P' || board[ar_i][i] == 'B')
			{
				if (check_rook(board, ar_i, i) == 1)
					return (1);
				else if (check_queen(board, ar_i, i) == 1)
					return (1);
				else if (check_pawn(board, ar_i, i) == 1)
					return (1);
				else if (check_bishop(board, ar_i, i) == 1)
					return (1);
			}
			i++;
		}
		ar_i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (check_mate(av, 1) == 0)
		write(1, "Fail\n", 5);
	return (0);
}
