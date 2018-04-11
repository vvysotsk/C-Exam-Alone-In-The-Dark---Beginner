/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:14:43 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/26 17:42:03 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char a, char b, int counter)
{
	if (a == b)
	{
		ft_putchar(a);
		counter--;
	}
	return (counter);
}

void	ft_inter(char *s1, char *s2, int i, int counter)
{
	int	j;
	int check;

	while (s1[i] != '\0')
	{
		check = 0;
		while (check != i && s1[check] != s1[i])
			check++;
		if (s1[check] == s1[i] && check != i)
			i++;
		else
		{
			j = 0;
			counter = 1;
			while (counter != 0 && s2[j] != '\0')
			{
				counter = ft_check(s1[i], s2[j], counter);
				j++;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_inter(argv[1], argv[2], 0, 0);
	ft_putchar('\n');
}
