/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:50:55 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/11 17:20:59 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int     *ft_range(int start, int end)
{
	int	i;
	int	*array;
	
	i = 0;
	if (start <= end)
	{
		array = (int *)malloc (sizeof(int) * (end - start));
		if (!array)
			return (0);
		while (start <= end)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	if (end <= start)
	{
		array = (int *)malloc (sizeof(int) * (start - end));
	if (!array)
		return (0);
	while (end <= start)
	{
		array[i] = end;
		end++;
		i++;
	}
	}
	return (array);	
}

int	main (void)
{
	int start = 0;
	int end = -3;
	int i = 0;
	int *tab = ft_range(start, end);
	int size;
	
	if (start <= end)
 	{ 
		size = end - start;
		while (i <= size)
		{
		printf("%d\n", tab[i]);
		i++;
		}
	free(tab);
	}
	if (end <= start)
 	{ 
		size = start - end;
		while (i <= size)
		{
		printf("%d\n", tab[i]);
		i++;
		}
	free(tab);
	}
	
	return (0);
	
}