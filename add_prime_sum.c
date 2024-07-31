/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:58:43 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/11 12:54:07 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
		ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}
int	is_space (char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	is_sign (char c)
{
	return (c == '-' || c == '+');
}

int	is_digit (char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int 	nbr;
	int	negativ;

	i = 0;
	nbr = 0;
	negativ = 1;
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
	while (is_digit(str[i]))
	{
		nbr = nbr * 10 +(str[i] - '0');
		i++;
	}
	return (nbr * negativ);
}

int	is_prime(int n)
{
	int	i;
	
	i = 2;
	if (n < i)
		return (0);
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);	
}

int	main(int argc, char *argv[])
{
	int 	n;
	int	sum;
	
	sum = 0;
	if (argc != 2 || ( ft_atoi(argv[1]) <= 0))
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	n = ft_atoi(argv[1]);
	while (n > 1)
	{
		if (is_prime(n))
			sum = sum + n;
		n--;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	
	
	return (0);
}