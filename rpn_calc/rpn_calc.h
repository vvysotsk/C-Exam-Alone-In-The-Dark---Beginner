/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:08:54 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/04/11 15:08:56 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
#define RPN_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef	struct		s_list
{
	int				val;
	struct s_list	*next;
}					t_list;

#endif
