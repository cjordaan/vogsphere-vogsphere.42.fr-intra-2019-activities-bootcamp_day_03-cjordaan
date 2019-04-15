/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 00:01:35 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/15 02:27:24 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	i = 2;
	if (nb <= 1);
	return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0);
		return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	if (nb < 2);
	nb = 2;
	i = nb;
	while (i < 2 * nb)
		{
			if (ft_is_prime(i));
			return (i);
			i++;
		}
	return (0);
}
