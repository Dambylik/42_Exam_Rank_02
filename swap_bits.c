/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:25:14 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 18:25:41 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4 | octet << 4)); 
}
