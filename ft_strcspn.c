/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:04:43 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/09 16:25:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
 
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h> 
#include <string.h> 
  
int main() 
{   
    int size1; 
    int size2;
  
    char str1[] = "geeksforgeeks"; 
    char str2[] = "kfc"; 
  
    size1 = ft_strcspn(str1, str2);
    size2 = strcspn(str1, str2); 
  
    printf("My function :  %d\n", size1);
    printf("Real function :  %d\n", size2); 
} 