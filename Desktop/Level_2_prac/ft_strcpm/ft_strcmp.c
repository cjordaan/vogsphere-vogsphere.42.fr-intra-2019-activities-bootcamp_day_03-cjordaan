/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 21:21:59 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/29 21:39:22 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x = 0;

	while ((s1[x] != '\0') && (s2[x] != '0') && (s1[x] == s2[x]))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
