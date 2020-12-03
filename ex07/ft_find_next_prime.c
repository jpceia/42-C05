/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:09:05 by jceia             #+#    #+#             */
/*   Updated: 2020/12/03 19:58:07 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	n = 2;
	while (n * n <= nb)
	{
		if (nb % n == 0)
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
