/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:02:29 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/10 14:20:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen (char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *str;
	char *p;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Hello Olga";
    printf("str size : %d\n",ft_strlen(source));
   
    char* copy = ft_strdup(source);
    printf("My function : %s\n", copy);

    char* copy2 = strdup(source);
    printf("Real function : %s\n", copy2);
    
    free(copy);
    free(copy2);
    return 0;
}