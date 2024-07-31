/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:47:16 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/05 15:49:03 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);		
}
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello Olga";
	printf("%d\n", ft_strlen(str));
	return (0);
}