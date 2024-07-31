/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:50:19 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/05 15:55:21 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>

int	main(void)
{
	int ten = 10;
	int *pten = &ten;
	int twen = 20;
	int *ptwen = &twen;

	printf("10 is %d\n", *pten);
	printf("20 is %d\n", *ptwen);

	ft_swap(pten, ptwen);
	printf("10 is %d\n", *pten);
	printf("20 is %d\n", *ptwen);
}