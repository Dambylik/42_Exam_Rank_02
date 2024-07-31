/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:15:29 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 17:23:29 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	unsigned int	test;

	test = 1;
	while (test <= n)
	{
		if (test == n)
			return (1);
		test = test * 2;
	}
	return (0);
}



#include <stdio.h>

int	main(void)
{
	unsigned int n = 16;
	
	printf("%u\n", is_power_of_2(n));
	return (0);
}