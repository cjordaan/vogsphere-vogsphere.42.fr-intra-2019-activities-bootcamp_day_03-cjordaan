/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:52:48 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/13 12:53:05 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 46)
		return (0);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main()
{
  printf("%d",ft_fibonacci(5));
  //ft_fibonacci(7);
  return(0);
}
