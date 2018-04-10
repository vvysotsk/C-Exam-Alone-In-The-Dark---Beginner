/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:04:22 by exam              #+#    #+#             */
/*   Updated: 2018/04/06 14:12:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*temp;

	counter = 0;
	if (!(begin_list))
		return (0);
	else
		counter = 1;
	temp = begin_list;
	while (temp->next)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
