/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:30:52 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/13 12:31:08 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb >= 13)
	{
		return (0);
	}
	if (nb > 0)
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
	else
	{
		return (0);
	}
}

int	ft_iterative_factorial(int nb)
{
	int x;
	int temp;

	temp = 1;
	x = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= x && x < 13)
	{
		temp = temp * x;
		x = x + 1;
	}
	return (temp);
}

int main(void) {
    // Disable stdout buffering
    printf("%d\n",ft_iterative_factorial(12));
    printf("%d\n",ft_iterative_factorial(-1));
    printf("%d\n",ft_iterative_factorial(0));
    printf("%d\n",ft_iterative_factorial(13));
    
    printf("%d\n",ft_recursive_factorial(12));
    printf("%d\n",ft_recursive_factorial(-12));
    printf("%d\n",ft_recursive_factorial(0));
    printf("%d\n",ft_recursive_factorial(13));
    
    return 0;
}
