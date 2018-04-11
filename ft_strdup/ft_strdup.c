/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:02:33 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/26 16:13:50 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int	len;
	int index;
	char *dest;

	len = ft_strlen(src);
	if(!(dest = (char *)malloc(sizeof(*dest) * len + 1)));
	return (NULL);
	index = 0;;
	while (index <= len)
	{
		dest[index] = src[index];
		index++;;
	}
	return (dest);
}
