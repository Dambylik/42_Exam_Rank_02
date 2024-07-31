/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:22:27 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 14:38:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	
	i = 0;
	while (*s1)
	{
		j = 0;
		while (s2[i])
		{
		if (*s1 == s2[i])
			return ((char *)s1);
		i++;
		}
	s1++;
	}
	return (NULL);
}


#include <stdio.h>

int	main(void)
{
	char *s1 = "Hello Olga";
	char *s2 = "Lol";

	printf("My function : %s\n", ft_strpbrk(s1, s2));
	printf("Real function : %s\n", ft_strpbrk(s1, s2));

	return (0);
}
