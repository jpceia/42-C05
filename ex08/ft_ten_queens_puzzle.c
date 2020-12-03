/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:15:40 by jceia             #+#    #+#             */
/*   Updated: 2020/12/03 22:29:39 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char check_valid(char *rows, int n)
{
	char	board[10][10];
	int		i;
	int		j;
	
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	while (x < n)
	{
		board[i][y] = 1;
		board[x][i] = 1;
		if ((y - x + i >= 0) && (y - x + i) < 10)
			board[i][y - x + i] = 1;
		if ((y + x - i >= 0) && (y - x + i) < 10)
			board[i][y + x - i] = 1;
		i++;
	}

	return (1);
}

int		ft_iter(char *rows, int n)
{
	int		i;
	int		sum;

	if (n >= 10)
	{
		// write result and return 1
		while (i < 10)
			write(1, '0' + rows[i++], 1);
		write(1, '\n', 1);
		return (1);
	}
	sum = 0;
	while (i < 10)
	{
		rows[n] = i;
		sum += ft_iter(rows, n + 1);
		i++;
	}
	return (sum);
}
int		ft_ten_queen_puzzle(void)
{
	char	rows[10];
	return (ft_iter(rows, 0));
}

int main()
{
	ft_ten_queen_puzzle();
}
