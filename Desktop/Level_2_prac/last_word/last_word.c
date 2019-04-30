/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 02:23:32 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/30 04:24:42 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		last_word(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		argv[1]--;
		while (last_word(*argv[1]))
			argv[1]--;
		while (*argv[1] && !last_word(*argv[1]))
			argv[1]--;
		argv[1]++;
while (*argv[1] && !last_word(*argv[1]))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
