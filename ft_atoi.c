/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:28:19 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/09 15:46:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\r' || c == '\v');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');	
}

int 	is_sign(char c)
{
	return (c == '-' || c == '+');
}


int	ft_atoi(const char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 1;
	number = 0;
	while (is_space(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			negativ = negativ * (-1);
		if (is_sign(str[i + 1]))
			return (0);
		i++;			
	}
	while (is_number(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (negativ * number);
}


int main(void)
{
	char my[] = "+0000000000000000000000000000000000000000000000000000123";
	char real[] = "+0000000000000000000000000000000000000000000000000000123";
	
printf("%d\n", ft_atoi(my));
printf("%d\n", atoi(real));


return 0 ;
}