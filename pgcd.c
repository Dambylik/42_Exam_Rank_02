/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:57:05 by okapshai          #+#    #+#             */
/*   Updated: 2024/07/11 18:00:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if (argc == 3)
  {
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    if (n1 > 0 && n2 > 0)
    {
      while (n1 != n2)
      {
        if (n1 > n2)
          n1 = n1 - n2;
        else
          n2 = n2 - n1;
      }
      printf("%d", n1);
    }
  }
  printf("\n");
}
