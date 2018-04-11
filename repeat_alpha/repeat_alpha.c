/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:00:38 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/21 19:39:22 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_repeat_alpha(char *str)
{
	int		index;
	int		counter;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			counter = 0;
			while (counter <= (str[index] - 65))
			{
				ft_putchar(str[index]);
				counter++;
			}
		}
		else if (str[index] >= 97 && str[index] <= 122)
		{
			counter = 0;
			while (counter <= (str[index] - 97))
			{
				ft_putchar(str[index]);
				counter++;
			}
		}
		else
			ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_repeat_alpha(argv[1]);
	return (0);
}
