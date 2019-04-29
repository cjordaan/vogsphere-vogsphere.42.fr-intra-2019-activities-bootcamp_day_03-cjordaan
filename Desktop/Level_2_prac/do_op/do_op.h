/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:27:00 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/29 13:53:41 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
