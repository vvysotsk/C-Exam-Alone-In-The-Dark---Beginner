/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 16:27:41 by exam              #+#    #+#             */
/*   Updated: 2018/04/06 16:50:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void	ft_print(char *str, int s, int e)
{
	int	check;

	check = s;
	if (s != 0)
		s += 1;
	while (s <= e)
	{
		write(1, &str[s], 1);
		s++;
	}
	if (check != 0)
		write(1, " ", 1);
}

void	ft_rev(char *str, int i, int s)
{
	s = i;
	while (i != 0)
	{
		while (str[s] != ' ' && str[s] != '\n' &&\
			   str[s] != '\t' && s != 0)
			s--;
		ft_print(str, s, i);
		while (str[s] == ' ' || str[s] == '\n' || str[s] == '\t')
			s--;
		i = s;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_rev(av[1], (ft_strlen(av[1]) - 1), 0);
	write(1, "\n", 1);
	return (0);
}
