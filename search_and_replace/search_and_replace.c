/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:04:02 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/01/24 15:04:04 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

void	search_and_replace(char **argv)
{
	int index;

	index = 0;
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][index], 1);
		index++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4 && argv[1][0] != '\0' && argv[2][0] != '\0' && \
		argv[3][0] != '\0' && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		search_and_replace(argv);
	write (1, "\n", 1);
	return (0);
}
