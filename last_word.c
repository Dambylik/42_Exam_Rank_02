/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:38:21 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 17:12:03 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_last_world(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i -= 1;
	while (s[i] == ' ' || s[i] == '\t')
		i--;
	while ((s[i] != ' ' && s[i] != '\t') && i >= 0)
		i--;
	i += 1;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
	{
		ft_putchar(s[i]);
		i++;
	}
	
}


int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_last_world(argv[1]);
	ft_putchar('\n');
	return (0);
}