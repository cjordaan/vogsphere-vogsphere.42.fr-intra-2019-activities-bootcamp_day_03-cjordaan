/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 09:44:48 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/13 11:57:06 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)

{
   int count;
   nb = 12;
   if (nb > 12)
       return (0);
   if (nb < 0)
       return (nb * 3);
   count = 1;
   while (nb >= 1)
   {
       count = count * nb;
       nb--;
   }
   return (count);
}

int main()

{
   void putnbr();
   printf("%d",ft_iterative_factorial(13));
   return(0);
}
