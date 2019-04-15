/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_quuens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjordaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 02:51:11 by cjordaan          #+#    #+#             */
/*   Updated: 2019/04/15 03:03:11 by cjordaan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c);
int	absolute(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

void solution(int n, int *hist)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (j == hist[i])
				ft_putchar(j + 48 + 1);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

void solve(int n, int col, int *hist)
{
	int i;
	int j;
	if (col == n)
	{
		solution(n, hist);
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(hist[j] == i || absolute(hist[j], i) == col - j))
			j++;
		if (j < col)
		{
			i++;
			continue;
		}
		hist[col] = i;
		solve(n, col + 1, hist);
		i++;
	}
}

void ft_eight_queens_puzzle(void)
{
	int hist[8];

solve(8, 0, hist);
}
