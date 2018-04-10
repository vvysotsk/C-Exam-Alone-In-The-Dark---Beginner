/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:48:48 by exam              #+#    #+#             */
/*   Updated: 2018/04/06 15:55:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>

int		check_rook(char **board, int ar_i, int i);
int		check_bishop(char **board, int ar_i, int i);
int		check_pawn(char **board, int ar_i, int i);
int		check_queen(char **board, int ar_i, int i);
int		check_hor(char **board, int ar_i, int i);
int		check_ver(char **board, int ar_i, int i);
int		check_ldiag(char **board, int ar_i, int i);
int		check_rdiag(char **board, int ar_i, int i);

# endif
