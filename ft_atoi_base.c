/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olly <Olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:50:19 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/24 14:48:15 by Olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	is_l_alpha(char c)
{
	if (c >= 'a' && c <= 'f')
		return (1);
	return (0);
}

int 	is_u_alpha(char c)
{
	if (c >= 'A' && c <= 'F')
		return (1);
	return (0);
}

int 	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');	
}

int	is_valid(char c, int base)
{
	int	i;
	char *l_base;
	char *u_base;

	i = 0;
	l_base = "0123456789abcdef";
	u_base = "0123456789ABCDEF";
	while (i < base)
	{
		if (c == l_base[i] || c == u_base[i])
			return (1);
		i++;
	}
	return (0);
}

int	is_space (int	ch)
{
	if (ch <= 32)
		return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	nbr;
	int	negativ;
	int	i;

	nbr = 0;
	negativ = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	while (is_sign(str[i]))
		{
			if (is_sign(str[i]) == '-')
				negativ = negativ * (-1);
			if (is_sign(str[i +1]))
				return (0);
			i++;	
		}
	while (str[i] && is_valid(str[i], str_base))
	{
		if (is_number(str[i]))
			nbr = nbr * str_base + (str[i] - '0');
		else if (is_l_alpha(str[i]))
			nbr = nbr * str_base + (str[i] - 'a' + 10);
		else if (is_u_alpha(str[i]))
			nbr = nbr * str_base + (str[i] - 'A' + 10);
		i++;
	}
	return (nbr * negativ);
}


#include <stdio.h>
int main(void)
{
	 printf ("%d\n", ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.", 16));

return 0 ;
}