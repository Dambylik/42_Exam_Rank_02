/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:26:14 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 15:35:53 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	tab[256] = {};

	i = 0;
	if (argc == 3)
	{	
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !tab[(int)argv[2][j]])
				{
					tab[(int)argv[2][j]] = 1;
					ft_putchar(argv[2][j]);
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');	
}