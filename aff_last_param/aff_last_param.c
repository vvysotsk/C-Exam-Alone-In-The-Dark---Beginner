/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:34:49 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/21 18:52:57 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	index;
	int	index2;

	index2 = 0;
	index = argc - 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[index][index2] != '\0')
	{
		write(1, &argv[index][index2], 1);
		index2++;
	}
	write(1, "\n", 1);
	return (0);
}
