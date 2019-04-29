/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:39:19 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/29 22:44:15 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_print_numbers(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		write(1, &x, 1);
		x++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
