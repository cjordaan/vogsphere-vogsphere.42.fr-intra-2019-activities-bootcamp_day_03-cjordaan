/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:33:04 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/29 21:15:59 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-')
			sign = sign * (-1);
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		i++;
	}
	res = res * sign;
	return (res);
}
