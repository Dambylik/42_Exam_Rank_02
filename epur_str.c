/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:58:10 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/11 14:32:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	is_space(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	space;

	i = 0;
	space = 0;

	if (!argv[1][i])
	{
		ft_putchar('\n');
		return (0);
	}
	while (is_space(argv[1][i]))
			i++;
	while (argv[1][i])
		{
			if(is_space(argv[1][i]))
				space = 1;
			if(!is_space(argv[1][i]))
			{
				if (space)
					ft_putchar(' ');
				space = 0;
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	
	ft_putchar('\n');
	return (0);
}