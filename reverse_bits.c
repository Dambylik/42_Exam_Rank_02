/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:56:10 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 18:00:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char res;

	i = 8;
	res = 0;
	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);	
	
}
#include <stdio.h>

int	main(void)
{
	unsigned char bit = 0;
	unsigned char octet = reverse_bits((unsigned char)5);

	int i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		printf("%c", bit);
	}
}