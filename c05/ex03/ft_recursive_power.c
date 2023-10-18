/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:46:23 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/21 13:42:38 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0 && nb == 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	else
	{
		while (power + 1 > 0)
		{
			power--;
			return (nb * ft_recursive_power(nb, power));
		}
	}
	return (1);
}
