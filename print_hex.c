/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:30:09 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/12 11:48:40 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_atoi(char *str)
{
    unsigned int res = 0, i = 0;

    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
	res += str[i++] - '0';
    }
    return (res);
}

void put_hex(int nbr)
{
    char *digits = "0123456789abcdef";

    if (nbr >= 16)
        put_hex(nbr / 16);
    nbr = digits[nbr % 16];
    write(1, &nbr, 1);
}

int main(int ac, char **av)
{
     if (ac == 2)
        put_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}