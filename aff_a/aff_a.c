/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:03:57 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/21 17:22:39 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc != 2)
		write(1, "a", 1);
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] == 'a')
		{
			write(1, &argv[1][index], 1);
			write(1, "\n", 1);
			return (0);
		}
		index++;
	}
	write(1, "\n", 1);
	return (0);
}
