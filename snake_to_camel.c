/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:03:52 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 19:10:21 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	to_upper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

void 	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
				ft_putchar(to_upper(argv[1][++i]));
			else
				ft_putchar((argv[1][i]));	
			i++;
		}
	}
	write (1, "\n", 1);
}