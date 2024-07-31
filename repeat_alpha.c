/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:56:34 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/05 16:20:18 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				while (j < argv[1][i] - 64)
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				j = 0;
				while (j < argv[1][i] - 96)
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write (1, &argv[1][i], 1);	
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}