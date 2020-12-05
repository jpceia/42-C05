/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:15:40 by jceia             #+#    #+#             */
/*   Updated: 2020/12/05 02:34:51 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_valid(int *rows, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if ((rows[i] == rows[n])
			|| (rows[i] + n - i == rows[n])
			|| (rows[i] - n + i == rows[n]))
			return (0);
		i++;
	}
	return (1);
}

int		add_queen(int *rows, int n)
{
	int		i;
	int		sum;

	if (!is_valid(rows, n - 1))
		return (0);
	if (n >= 10)
	{
		i = 0;
		while (i < 10)
			ft_putchar('0' + rows[i++]);
		ft_putchar('\n');
		return (1);
	}
	sum = 0;
	i = 0;
	while (i < 10)
	{
		rows[n] = i;
		sum += add_queen(rows, n + 1);
		i++;
	}
	return (sum);
}

int		ft_ten_queens_puzzle(void)
{
	int	rows[10];

	return (add_queen(rows, 0));
}
