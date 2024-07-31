/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:50:10 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/09 16:02:33 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] || s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
return (0);	
}


int main(void)
{
	printf ( "Real function : \n");
	printf ( "1. %d\n", strcmp ("equal", "Equal"));
	printf ( "2. %d\n", strcmp ( "Equal", "equal"));
	printf ( "2. %d\n", strcmp ( "Equal", "Equal"));
	printf("Francinette 1: %d\n", strcmp("t", ""));
	printf("Francinette 2: %d\n", strcmp("1234", "1235"));
	printf("Francinette 12: %d\n", strcmp("", "1"));
	printf("Francinette 13: %d\n", strcmp("1", ""));

	printf ( "My function : \n");
	printf ( "1. %d\n", ft_strcmp ("equal", "Equal"));
	printf ( "2. %d\n", ft_strcmp ( "Equal", "equal"));
	printf ( "2. %d\n", ft_strcmp ( "Equal", "Equal"));
	printf("Francinette 1: %d\n", ft_strcmp("t", ""));
	printf("Francinette 2: %d\n", ft_strcmp("1234", "1235"));
	printf("Francinette 12: %d\n", ft_strcmp("", "1"));
	printf("Francinette 13: %d\n", ft_strcmp("1", ""));
return ( 0 );
} 