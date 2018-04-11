/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:06:16 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/26 20:49:48 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str, int index)
{
	int	check;
	int counter;

	check = index - 1;
	counter = 1;
	while (check >= 0 && counter != 0)
	{
		if (str[index] == str[check])
			counter--;
		check--;
	}
	if (counter == 0)
		return ;
	else
		ft_putchar(str[index]);
}

int		ft_check(char *s1, char c)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] == c)
			return (1);
		index++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		ft_print(s1, index);
		index++;
	}
	index = 0;
	while (s2[index] != '\0')
	{
		if (ft_check(s1, s2[index]) == 1)
			index++;
		else
		{
			ft_print(s2, index);
			index++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
