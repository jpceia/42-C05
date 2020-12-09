/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:09:05 by jceia             #+#    #+#             */
/*   Updated: 2020/12/09 17:02:16 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long n;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	n = 1;
	while ((6 * n - 1) * (6 * n - 1) <= (long)nb)
	{
		if (nb % (6 * n - 1) == 0)
			return (0);
		if (nb % (6 * n + 1) == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int p;

	if (nb <= 2)
		return (2);
	p = nb % 2 == 0 ? nb + 1 : nb;
	while (1)
	{
		if (ft_is_prime(p))
			return (p);
		p++;
		p++;
	}
}
