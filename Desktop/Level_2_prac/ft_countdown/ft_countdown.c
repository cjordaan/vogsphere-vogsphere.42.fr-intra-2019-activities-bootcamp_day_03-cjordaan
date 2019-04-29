/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:22:39 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/29 23:28:13 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_countdown(void)
{
	int x;

	x = '9';
	while (x >= '0')
	{
		write(1, &x, 1);
		x--;
	}
}

int		main(void)
{
	ft_countdown();
	return (0);
}
