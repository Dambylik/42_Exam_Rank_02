/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_olga.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olly <Olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:08:30 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/24 15:22:47 by Olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, int len)
{
	int i = 0;
	while (src[i] && i < len) 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char **ft_split(char *str)
{
	int	i = 0;
	int wc = 0;
	int start = 0;
	int j = 0;
	char **result = NULL;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			wc++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	result = (char **)malloc (sizeof(char *) * (wc + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
				i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				i++;
		if (i > start)
		{
			result[j] = (char *)malloc (sizeof(char) * (i - start + 1));
			if (!result[j])
				return (NULL);
			ft_strncpy(result[j++], &str[start], i - start);		
		}
	}
	result[j] = NULL;
	return (result);
}

int main (void)
{
	int i = 0;
	char **result = ft_split("Hello Olga this is your split");

	if (result)
	{
		while (result[i])
		{
			printf("Line number %d : String : %s\n", i, result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}