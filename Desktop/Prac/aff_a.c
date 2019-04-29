/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 23:26:19 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/25 23:27:18 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	aff_a(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] == 'a')
		{
			ft_putchar('a');
			break;
		}
		x++;
	}
}

int		main(int argc, char **argv)
{
	if ( argc == 2)
	{
		aff_a(argv[1]);
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return(0);
}
