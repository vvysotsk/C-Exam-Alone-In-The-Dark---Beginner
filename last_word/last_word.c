/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:14:52 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/26 19:14:19 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int	start;
	int end;

	start = 0;
	end = 0;
	while (str[start] != '\0')
	{
		if (str[start] >= 33 && str[start] <= 127)
			end = start;
		start++;
	}
	start = end;
	while (str[start - 1] >= 33 && str[start - 1] <= 127)
		start--;
	while (start <= end)
	{
		ft_putchar(str[start]);
		start++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
