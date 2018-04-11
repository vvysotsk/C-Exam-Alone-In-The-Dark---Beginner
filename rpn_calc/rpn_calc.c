/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:08:48 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/04/11 15:08:51 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int		ft_isnum(char *str)
{
	int index = 0;

	if (str[index] == '+' || str[index] == '-')
		index++;
	if (str[index] >= '0' && str[index] <= '9')
		return (1);
	return (0);
}

void	ft_lstadd(t_list **list, int nb)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		new->val = nb;
		new->next = *list;
		*list = new;
	}
}

void	ft_lstdel(t_list **list)
{
	t_list	*temp;

	temp = *list;
	*list = temp->next;
	free(temp);
}

int		ft_isop(char *str)
{
	if (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%')
		return (1);
	return (0);
}

int		ft_calc(t_list **list, char c)
{
	t_list	*temp;
	int *a;
	int b;

	if (!*list || !(temp = (*list)->next))
		return (0);
	a = &temp->val;
	b = (*list)->val;
	if (c == '+')
		*a += b;
	if (c == '-')
		*a -= b;
	if (c == '*')
		*a *= b;
	if (c == '/')
	{
		if (b == 0)
			return (0);
		*a /= b;
	}
	if (c == '%')
	{
		if (b == 0)
			return (0);
		*a %= b;
	}
	ft_lstdel(list);
	return (1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		char	*str = av[1];
		t_list	*list = NULL;

		while (*str)
		{
			if (ft_isnum(str))
			{
				ft_lstadd(&list, atoi(str));
				while (*str && *str != ' ')
					++str;
			}
			else if (ft_isop(str))
			{
				if (!ft_calc(&list, *str))
					break ;
				while (*str && *str != ' ')
					str++;
			}
			else if (*str == ' ')
			{
				if (!*(str + 1))
					break ;
				str++;
			}
			else
				break ;
		}
		if (*str || list->next)
			write(1, "Error\n", 6);
		else
			printf("%d\n", list->val);
		while (list)
			ft_lstdel(&list);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}