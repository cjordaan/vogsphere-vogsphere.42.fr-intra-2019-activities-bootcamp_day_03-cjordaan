/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 10:46:38 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/29 11:35:29 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			ft_putchar(('z' + 'a') - str[x]);
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			ft_putchar(('Z' + 'A') - str[x]);
		}
		else
			ft_putchar(str[x]);
		x++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
