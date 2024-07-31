/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:28:33 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 17:39:21 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	count;
	int 	result;
	int	i;

	count = 0;
	result = 0;
	i = 0;
	if (len > 0)
	{
		while (count < len)
		{
			if (tab[i] > result)
				result = tab[i];
			i++;
			count++;
		}
		return (result);
	}
	return (0);	
}

#include <stdio.h>
int main (void)
{
	int tab[] = {1, 3, 2, 10, 9};
	printf("%d\n", max(tab, 5));
}