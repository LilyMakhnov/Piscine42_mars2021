/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:02:56 by esivre            #+#    #+#             */
/*   Updated: 2021/03/17 08:20:26 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (++i < power)
		res *= nb;
	return (res);
}
