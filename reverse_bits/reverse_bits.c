/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:44:08 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/03/26 19:56:03 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char		reverse_bits(unsigned char octet)
{
	unsigned char	r;
	unsigned		len;

	len = 8;
	r = 0;
	while (len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}
