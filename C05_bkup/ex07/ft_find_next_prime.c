/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:04:25 by esivre            #+#    #+#             */
/*   Updated: 2021/03/22 12:27:39 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prim(int nb)
{
	unsigned int i;

	if (nb <= 2)
		return (nb == 2);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (ft_is_prim(nb) == 0)
		nb++;
	return (nb);
}
