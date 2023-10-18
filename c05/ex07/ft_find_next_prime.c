/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:15:46 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/19 12:30:52 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	index;

	index = 2;
	if (nb < 0)
		return (0);
	while (nb / index != 1)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}
