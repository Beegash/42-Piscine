/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:19:13 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/19 13:10:50 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power > 0 && nb == 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}
