/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:56:56 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/14 23:03:26 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

// int ft_is_prime(int nb)
// {
//   int count;

//   if (power != 0)
//   {
//     count = nb * ft_recursive_power(nb, power - 1);
//     return (count);
//   }
//   else
//   {
//     return(1);
//   }
  
// }

// int	ft_sqrt(int nb)
// {
// 	int i;

// 	if (nb > 46340 * 46340)
// 		return (0);
		
// 	i = 0;
// 	while (i * i < nb)
// 	{
// 		if ((i * i) == nb)
// 			return (i);
// 		i++;
// 	}
// 	return (i - 1);
// }


int	ft_sqrt(int nb)
{
	int i;

	if (nb > 46340 * 46340)
		return (0);
	
	i = 0;
	while (i * i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (i);
}


int ft_is_prime(int nb)
{
  int i;
    
  i = ft_sqrt(nb);
  if (nb < 0)
    return (0);
  if (nb == 2)
    return (1);
  while (i >= 2)
  {
    if (nb % i == 0)
      return(0);
    i--;
  }
  
  return(1);
}


int main()
{
  int i = 0;
  while (i < 21)
    {
    printf("%d ",i);
    printf("%d\n",ft_is_prime(i));
    i++;
    }
  printf("%d\n",ft_is_prime(3));
  
  //ft_is_prime(99);
  return(0);
}


