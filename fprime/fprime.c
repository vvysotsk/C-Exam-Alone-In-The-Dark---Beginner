/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 16:22:26 by exam              #+#    #+#             */
/*   Updated: 2018/04/11 13:14:38 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_prime(char *str)
{
	int	nb;
	int	prime;

	prime = 2;
	nb = atoi(str);
	if (nb == 1)
		printf("%d", nb);
	if (nb < 0)
	{
		printf("%c", '\n');
		return ;
	}
	while (nb > 1)
	{
		if ((nb % prime) == 0)
		{
			nb /= prime;
			printf("%d", prime);
			prime = 1;
			if (nb != 1)
				printf("%c", '*');
		}
		prime++;
	}
	printf("%c", '\n');
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_prime(av[1]);
	else
		printf("%c", '\n');
	return (0);
}
