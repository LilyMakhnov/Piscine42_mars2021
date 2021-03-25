/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:47:12 by esivre            #+#    #+#             */
/*   Updated: 2021/03/15 10:13:28 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_up(char a);

int		is_numb(char a);

int		is_alpha_low(char a);

char	*ft_strcapitalize(char *str)
{
	int	to_up;
	int i;

	i = 0;
	to_up = 1;
	while (str[i])
	{
		if (is_alpha_low(str[i]) + is_alpha_up(str[i]) + is_numb(str[i]) == 0)
			to_up = 1;
		else
		{
			if (to_up == 1)
			{
				if (is_alpha_low(str[i]) == 1)
					str[i] = str[i] - 32;
				to_up = 0;
			}
			else if (is_alpha_up(str[i]) == 1)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int		is_alpha_up(char a)
{
	return (a <= 'Z' && a >= 'A');
}

int		is_alpha_low(char a)
{
	return (a <= 'z' && a >= 'a');
}

int		is_numb(char a)
{
	return (a >= '0' && a <= '9');
}
