/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:43:13 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/15 14:43:22 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	ft_count_substrings(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
	str++;
	}
	return (count);
}

static char	*ft_copy_substring(const char *start, int length)
{
	char	*substr;
	int	i;
	
	i = 0;
	substr = (char *)malloc((length + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start[i] && i < length)
	{
		substr[i] = start[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static int	ft_free_result(char **result, int count)
{
	if (result[count] == NULL)
	{
		count--;
		while (count > 0)
		{
			free(result[count]);
			count--;
		}
		free(result[0]);
		free(result);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char const		*start;
	char			**result;
	int				i;

	i = 0;
	result = (char **)malloc((ft_count_substrings(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_copy_substring(start, s - start);
			if (ft_free_result(result, i))
				return (NULL);
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

int main() 
{
	char **result = ft_split("Hello Olga this is your split", ' ');
	int	i = 0;
	
	if (result) 
	{
		while (result[i])
		{
			printf("Substring %d: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
		}
	return 0;
}