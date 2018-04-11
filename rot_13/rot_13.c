/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 15:34:42 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/24 15:53:07 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 65 && str[index] <= 77) ||\
			(str[index] >= 97 && str[index] <= 109))
			ft_putchar(str[index] + 13);
		else if ((str[index] >= 78 && str[index] <= 90) ||\
			(str[index] >= 110 && str[index] <= 122))
			ft_putchar(str[index] - 13);
		else
			ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_rot_13(argv[1]);
	return (0);
}
