/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:32:38 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/11 17:45:10 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if(argv[1][i] == 0)
			write(1, "1", 1);
		else
			write (1, "0", 1);
	}
	write(1, "\n", 1);
}