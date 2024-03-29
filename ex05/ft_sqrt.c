/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:01:00 by jceia             #+#    #+#             */
/*   Updated: 2020/12/03 19:51:27 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb == 1)
		return (1);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % (i * i) == 0)
			return (i * ft_sqrt(nb / (i * i)));
		i++;
	}
	return (0);
}
