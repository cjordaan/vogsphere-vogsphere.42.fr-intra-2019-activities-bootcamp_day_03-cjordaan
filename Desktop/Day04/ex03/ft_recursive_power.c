/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:42:25 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/13 12:43:06 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_recursive_power(int nb, int power)
{
  int     n;
  
  if (power == 0)
  return (1);
  
  if (power < 0)
  return (0);
  
  
  while (power > 0 ){
  
  
  n = nb;
    return (n * ft_recursive_power(nb, (power - 1)));
}
  return (nb);
}


int main()
{
  printf("%d", ft_recursive_power(10, 3));
  return (0);
}
