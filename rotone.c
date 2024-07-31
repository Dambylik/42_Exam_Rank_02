/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:49:39 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/05 18:08:16 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] == 'Z') || (argv[1][i] == 'z'))
				argv[1][i] -= 25;
			else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
				argv[1][i] += 1;
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
return (0);
}
