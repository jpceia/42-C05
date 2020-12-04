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

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char is_valid(char *rows, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (rows[i] == rows[n]
            || rows[i] + n - i == rows[n]
            || rows[i] - n + i == rows[n])
            return (0);
        i++;
    }
    return (1);
}

int	    next_queen(char *rows, int n)
{
	int		i;
	int		sum;

        i = 0;
        if (n >= 10)
	{
		// write result and return 1
		while (i < 10)
			ft_putchar('0' + rows[i++]);
		ft_putchar('\n');;
		return (1);
	}
        if (!is_valid(rows, n))
            return (0);
        sum = 0;
	while (i < 10)
	{
		rows[n] = i;
		sum += next_queen(rows, n + 1);
		i++;
	}
	return (sum);
}

int	    ft_ten_queen_puzzle(void)
{
	char	rows[10];
	return (next_queen(rows, 0));
}

int main()
{
	ft_ten_queen_puzzle();
}
