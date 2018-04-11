/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 13:21:25 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/04/11 13:21:27 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int			ft_strlen(char *str)
{
	int 	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void		str_maxlenoc(char **ar_str, int ac)
{

}

int			main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	if (ac == 2)
		write(1, av[1], ft_strlen(av[2]));
	else
	{
		str_maxlenoc(av + 1, ac - 1);
		write(1, "\n", 1);
	}
	return (0);
}
